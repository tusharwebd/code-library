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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int option1 = height(root->left) + height(root->right);
        int option2 = diameterOfBinaryTree(root->right);
        int option3 = diameterOfBinaryTree(root->left);
        return max(option1,max(option2,option3));

    }
    int height(TreeNode* root){
        if(root==NULL)
        {
            return 0;
        }
        int lef = height(root->left);
        int righ = height(root->right);
        return 1 + max(lef,righ);
    }
};
