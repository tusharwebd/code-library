/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool check(TreeNode* root,long min,long max)
    {
        if(!root)
        {
            return true;
        }
        if(long(root->val) <= min || long(root->val) >= max)
        {
            return false;
        }
            return (check(root->left,min,root->val)&&check(root->right,root->val,max));

    }
    bool isValidBST(TreeNode* root) {
            return check(root,LONG_MIN,LONG_MAX);

    }
};
