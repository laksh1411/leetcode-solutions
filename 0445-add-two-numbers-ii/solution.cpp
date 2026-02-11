/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* st,ListNode* end){
        ListNode* curr=st;
        ListNode* prev=NULL;
        while(curr!=end){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1, NULL);
        l2=reverse(l2, NULL);
    int carry=0;
    ListNode* ans=new ListNode(0);

    ListNode* temp=ans;
    while (l1 || l2 || carry){
        int sum=carry;
        if(l1){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2){
            sum+=l2->val;
            l2=l2->next;
        }
        carry=sum/10;
        temp->next=new ListNode(sum%10);
        temp=temp->next;
    }
    return reverse(ans->next, NULL);
    }

};
