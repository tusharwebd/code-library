class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        int arr[n+1][m+1];
        for(int i = 0;i<=n;i++)
        {
            for(int j = 0;j<=m;j++)
            {
                if(i==0||j==0)
                    arr[i][j] = 0;
                else{
                    if(s[i-1]==t[j-1])
                        arr[i][j] = arr[i-1][j-1] + 1;
                    else
                        arr[i][j] = max(arr[i-1][j],arr[i][j-1]);

                }
            }
        }
        if(n==arr[n][m])
            return true;
        return false;
    }
};
