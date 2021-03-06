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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        return check(root->left,root->right);
    }

    bool check(TreeNode* r1,TreeNode* r2)
    {
        if(r1==NULL || r2==NULL)
        {
            return r1 == r2;
        }
        if(r1->val!=r2->val)
        {
            return false;
        }
        return check(r1->left,r2->right)&&check(r1->right,r2->left);
    }
};
