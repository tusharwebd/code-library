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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty())
            return NULL;
        TreeNode* per = func(nums,0,nums.size());
        return per;
    }
    TreeNode* func(vector<int> &nums2,int left, int right)
    {
        if(left >= right)
            return NULL;
        int mid = left + (right-left)/2;
        TreeNode* current = new TreeNode(nums2[mid]);
        current->left = func(nums2,left,mid);
        current->right = func(nums2,mid+1,right);
        return current;
    }
};
