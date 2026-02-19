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
    int lh(TreeNode* p){
        if(!p) return 0;
        return 1+lh(p->left);
    }
    int rh(TreeNode* q){
        if(!q) return 0;
        return 1+rh(q->right);
    }
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        int lc=lh(root);
        int rc=rh(root);

        if(lc==rc) return pow(2,lc)-1;

        return 1+countNodes(root->left)+countNodes(root->right);
    }
};
