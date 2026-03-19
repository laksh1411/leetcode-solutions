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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp1=head;
        int count=1;
        ListNode* prevleft = NULL;
        while(count!=left){
            if(temp1==NULL) return head;
            prevleft=temp1;
            temp1=temp1->next;
            count++;
        }
        ListNode* temp2=temp1;
        while(count!=right){
            if(temp2==NULL) return head;
            temp2=temp2->next;
            count++;
        }
        ListNode* nextRight = temp2->next;
        ListNode* ans=reverse(temp1,temp2);

        if(prevleft!=NULL){
            prevleft->next=ans;
        }
        else head=ans;
        temp1->next = nextRight;
        return head;
    }
    ListNode* reverse(ListNode* curr,ListNode* end){
        ListNode* prev=NULL;
        ListNode* stop = end->next;
        while(curr!=stop){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;

        }
        return prev;
    }
};
