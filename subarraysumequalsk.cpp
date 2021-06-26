class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int sum = 0;
        unordered_map<int,int> num;
        num[0] = 1;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];

            if(num.find(sum-k)!=num.end())
            {
                count += num[sum-k];
            }
            num[sum] += 1;
        }
        return count;

    }
};
