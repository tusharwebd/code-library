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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> res;
        Small(root,res);
        return res[k-1];
    }

    void Small(TreeNode* root,vector<int>& res)
    {
        if(!root)
            return;
        Small(root->left,res);
        res.push_back(root->val);
        Small(root->right,res);
    }
};
