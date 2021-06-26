class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for(int i = 0;i<k;i++)
        {
            int val = nums.back();
            nums.pop_back();
            nums.insert(nums.begin(),val);
        }
    }
};
