class Solution {
public:
    bool wordBreak(string s, vector<string>& dict) {
        vector<bool> dp(s.size()+1,false);
        dp[0] = true;
        for(int i = 1;i<=s.size();i++)
        {
            for(int j = i-1;j>=0;j--)
            {
                string word = s.substr(j,i-j);
                if(dp[j])
                if(find(dict.begin(),dict.end(),word)!=dict.end())
                {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[s.size()];
    }
};
