class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0,count = 0;
        if(nums.empty())
        {
            return 0;
        }
        for(int j = 1;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i] = nums[j];
            }

        }
        return i+1;
    }
};
