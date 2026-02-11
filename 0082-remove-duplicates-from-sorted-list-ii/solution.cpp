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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return NULL;

        ListNode* clone = new ListNode(0);
        clone->next = head;

        ListNode* prev=clone;
        ListNode* curr=head;

        while(curr){
            if(curr->next && curr->val == curr->next->val){
                while(curr->next && curr->val == curr->next->val){
                    curr=curr->next;
                }
                prev->next=curr->next;
            }
            else{
                prev=prev->next;
            }
            curr=curr->next;
        }
        return clone->next;
    }
};
