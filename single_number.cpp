class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> newnums;
        for(int i:nums)
        {
                   if(newnums.find(i)==newnums.end())
                   {
                       newnums.insert(i);
                   }
                    else
                    {
                        newnums.erase(i);
                    }
        }
        for(auto i:newnums)
        {
            return i;
        }
        return -1;

    }
};
