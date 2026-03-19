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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) return NULL; 
        ListNode* dummy=head;
        int size=0;
        while(dummy!=NULL){
            dummy=dummy->next;
            size++;
        }
        int mid=size/2;
        int count=1;
        ListNode* point=head;
        while(point->next!=NULL){
            if(count==mid){
                point->next=point->next->next;
                break;
            }
            else count++;
            point=point->next;
        }
        return head;

    }
};
