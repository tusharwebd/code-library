class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string prefix = "";
        if(strs.size()==0)
            return prefix;
        for(int k = 0;k<strs[0].size();k++)
            {
                int j = 1;
                for(;j<strs.size();j++)
                {
                    if(strs[0][k]!=strs[j][k])
                    {
                        return prefix;
                    }
                }
                if(j==strs.size())
                    prefix += strs[0][k];
            }
        return prefix;
    }
};
