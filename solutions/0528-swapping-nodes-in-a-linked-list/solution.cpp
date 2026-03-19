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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        int size=0;
        while(temp){
            temp=temp->next;
            size++;
        }
        ListNode* temp1=head;
        int count=1;
        while(count!=k){
            temp1=temp1->next;
            count++;
        }
        ListNode* second = head;
        count = 1;
        while(count!=size-k+1){
            second=second->next;
            count++;
        }
        swap(temp1->val,second->val);
        return head;
    }
};
