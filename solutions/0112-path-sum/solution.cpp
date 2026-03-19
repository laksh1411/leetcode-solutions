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
    bool path(TreeNode* p,int targetsum,int sum){
        if(!p) return false;
        sum+=p->val;
        if(p->left==NULL && p->right==NULL){
            if(sum==targetsum) return true;
        }
        return path(p->left,targetsum,sum) || path(p->right,targetsum,sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return (path(root,targetSum,0));
    }
};
