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
    int i = 0;
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vec;
        queue<TreeNode*> q1;
        if(!root)
        {
            return vec;
        }
        q1.push(root);
        while(!q1.empty())
        {   vector<int> vec2;
            int size = q1.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* curr = q1.front();
                vec2.push_back(curr->val);
                q1.pop();
                if(curr->left!=NULL)
                {
                    q1.push(curr->left);
                }
                if(curr->right!=NULL)
                {
                    q1.push(curr->right);
                }
            }
            vec.push_back(vec2);
        }
        return vec;
    }
};

    
