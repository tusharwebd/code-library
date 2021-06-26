class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum1 = 0;
        int sum2 = 0;
        int j = 1;
        for(int i = 0;i<n;i++)
        {
            sum1 += nums[i];
            sum2 += j;
            j++;
        }
        return sum2 - sum1;
    }
};
