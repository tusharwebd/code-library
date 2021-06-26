class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i = 0;i<nums.size();i++)
        {
            sum += nums[i];
        }
        if(sum%2!=0)
            return false;
        else
            return checkPartition(nums,n,sum);
    }

    bool checkPartition(vector<int> &nums, int n,int sum)
    {
        bool t[n+1][sum+1];

        for(int j = 0;j<=sum;j++)
            t[0][j] = false;
        for(int i = 0;i<=n;i++)
            t[i][0] = true;
        for(int i = 1;i<=n;i++)
        {
            for(int j = 1;j<=sum;j++)
            {
                if(nums[i-1]<=j)
                {
                    t[i][j] = t[i-1][j] || t[i-1][j-nums[i-1]];
                }
                else
                    t[i][j] = t[i-1][j];
            }
        }

        return t[n][sum/2];
    }
};
