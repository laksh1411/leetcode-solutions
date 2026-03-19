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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL || list2==NULL){
            return list1==NULL?list2:list1;
        }
        if(list1->val<=list2->val){
            list1->next=mergeTwoLists(list1->next,list2);
            return list1;
        }
        else{
            list2->next=mergeTwoLists(list2->next,list1);
            return list2;
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& list) {
        if(list.size()==0) return NULL;
        while (list.size() > 1) {
            vector<ListNode*> temp;
            for(int i=0;i<list.size();i+=2){
                ListNode* l1=list[i];
                ListNode* l2=(i+1<list.size()?list[i+1]:NULL);
                temp.push_back(mergeTwoLists(l1,l2));
            }
            list=temp;
        }
        return list[0];
    }
};
