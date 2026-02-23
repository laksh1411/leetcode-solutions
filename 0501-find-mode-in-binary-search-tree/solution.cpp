/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root,vector<int>& ans){
        if(root==NULL) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        int maxi=0;
        unordered_map<int,int>m;
        vector<int> a;
        for(int i=0;i<ans.size();i++){
            m[ans[i]]++;
            maxi=max(maxi,m[ans[i]]);
        }
        for(auto it:m){
            if(it.second==maxi) a.push_back(it.first);
        }
        
         return a;
    }
};
