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
    ListNode* swapPairs(ListNode* head) {
         if (head == NULL || head->next == NULL)
            return head;

        ListNode* first = head;
        ListNode* second = head->next;
        ListNode* rest = second->next;
        ListNode* ans = reverse(first, rest);
        first->next=swapPairs(rest);
        return ans;
    }

    ListNode* reverse(ListNode* curr,ListNode* end){
        ListNode* prev=NULL;
        while(curr!=end){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;

        }
        return prev;
    }
};
