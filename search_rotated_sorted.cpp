class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n;
        if(nums.empty())
            return -1;
        int left = 0;
        int right = nums.size()-1;
        while(left < right)
        {
            int mid = (left + right) / 2;
            if(nums[mid] > nums[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
        int ind = left;
        left = 0;
        right = nums.size()-1;
        if(target==nums[ind])
        {
            return ind;
        }
        else if(target > nums[ind] && target <=nums[right])
        {
            left = ind;
        }
        else
        {
            right = ind;
        }
        while(left <= right)
        {
            int mid = (left + right)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return -1;
    }
};
