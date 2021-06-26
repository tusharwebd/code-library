class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxsum = 0;
        int newsum = nums[0];
        int maxglobal = nums[0];
        if(nums.size()>1)
        {
        for(int i = 1;i < nums.size();++i)
        {
            newsum += nums[i];
            maxsum = max(nums[i],newsum);
            if(newsum < maxsum)
            {
                newsum = maxsum;
            }
            if(maxglobal < maxsum)
            {
                maxglobal = maxsum;
            }
        }
        }
        else
            return nums[0];
        return maxglobal;

    }
};
