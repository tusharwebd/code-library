class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector <int> nums2;
    int prod = 1;
    for(int i = 0;i<nums.size();i++)
    {
        if(nums2.empty())
        {
            nums2.push_back(1);
        }
        else
        {
            prod = prod * nums[i-1];
            nums2.push_back(prod);
        }
    }
    prod = 1;
    for(int i = nums.size()-1;i > 0;i--)
    {
        prod *= nums[i];
        nums2[i-1] = nums2[i-1] * prod;
    }
    for(auto val: nums2)
    {
        cout << val << " ";
    }
    return nums2;
    }
};
