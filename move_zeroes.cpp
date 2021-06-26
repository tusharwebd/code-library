class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int arr2[nums.size()];
        int count = 0;
        for(int i =0;i<nums.size();++i)
        {
            if(nums[i]==0)
            {
                count += 1;
            }
            else if(nums[i]!=0)
            {
                nums[i-count] = nums[i];
            }

        }
        int j = nums.size()-count;
        for(int k = j;k<nums.size();k++)
        {
            nums[k] = 0;
        }
    }

};
