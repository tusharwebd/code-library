class Solution {
public:
    bool canJump(vector<int>& nums) {
        int step = nums.size()-1;
        for(int i = nums.size()-2;i>=0;i--)
        {
            if(i + nums[i] >= step)
            {
                step = i;
            }

        }
        if(step==0)
            return true;
        return false;

    }
};
