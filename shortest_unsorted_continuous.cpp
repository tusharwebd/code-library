class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {

        vector<int> sor(nums);
        sort(sor.begin(),sor.end());
        int n = nums.size();
        int i = 0,j = n-1;
        while(i<n&&sor[i]==nums[i])
        {
            i++;
        }
        while(j>i&&sor[j] == nums[j])
        {
            j--;
        }
        return j+1-i;

    }
};
