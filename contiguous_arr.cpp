class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int pos = 0;
        unordered_map <int,int> nums2;
        int count = 0;
        int i = -1;
        for(auto val: nums)
        {
            i+=1;
            if(val==0)
            {
                count += -1;
            }
            else
            {
                count += 1;
            }
            if(count==0)
            {
                pos = i + 1;
            }
            if(nums2.find(count)!=nums2.end())
            {
                pos = max(pos,i-nums2[count]);
            }
            else
                nums2[count] = i;
        }
        return pos;
    }
};
