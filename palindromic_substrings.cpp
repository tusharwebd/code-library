class Solution {
public:
    int countSubstrings(string s) {
        vector<vector<int>> vec(s.size(),vector<int> (s.size(),0));
        int count = 0;
        for(int i = 0;i<s.length();i++)
        {
            vec[i][i] = 1;
            count++;
        }
        for(int col = 1;col < s.length();col++)
        {
            for(int row = 0;row<col;row++)
            {
                if(row == col-1 && s[row] == s[col])
                {
                    count++;
                    vec[row][col] = 1;
                }
                else if(vec[row+1][col-1] == 1 && s[row] == s[col])
                {
                    count++;
                    vec[row][col] = 1;
                }
            }
        }
        return count;
    }
};
