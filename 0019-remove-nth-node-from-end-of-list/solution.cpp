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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* dummy=head;
        while(dummy!=NULL){
            dummy=dummy->next;
            size++;
        }
        int node=size-n;
        cout<<node;
        int count=1;
        ListNode* point=head;
        if(head->next==NULL) return NULL;
        if(node==0)return head->next;
        while(point->next!=NULL){
            if(count==node){
                point->next=point->next->next;
                break;
            }
            else count++;
            point=point->next;
        }
        return head;
    }
};
