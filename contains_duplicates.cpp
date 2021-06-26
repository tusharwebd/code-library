class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> nums2;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums2.find(nums[i])==nums2.end())
            {
                nums2[nums[i]] = 0;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
