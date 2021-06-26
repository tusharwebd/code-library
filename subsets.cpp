class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> num {{}};
        for(int numb:nums)
        {
            int n = num.size();
            for(int i = 0;i<n;i++)
            {
                num.push_back(num[i]);
                num.back().push_back(numb);
            }
        }
        return num;
    }
};
