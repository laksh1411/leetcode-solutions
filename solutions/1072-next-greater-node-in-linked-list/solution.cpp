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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> clone;
        while(head){
            clone.push_back(head->val);
            head=head->next;
        }
        int n=clone.size();
        vector<int> ans(n,0);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && clone[st.top()]<clone[i]){
                ans[st.top()]=clone[i];
                st.pop();
            }
            st.push(i);
        }
        //ans.push_back(0);
        return ans;
    }
};
