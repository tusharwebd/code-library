#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<vector<int>> matrix(n,vector<int> (n,0));
    int dp[int(pow(2,n))];
    dp[0] = 0;
    for(int i = 1;i<pow(2,n);i++){
        dp[i] = INT_MAX;
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
            cin >> matrix[i][j];
    }
    int mask,val;
    for(mask = 0;mask<pow(2,n);mask++)
    {
        int x = 0;
        val = mask;
        while(val)
        {
            x += val & 1;
            val >>= 1;
        }
//        cout << x << " ";
        val = mask;
        for(int j = 0;j<n;j++)
        {
            int k = j;
            val = mask;
            int check;
            val >>= k;
            check = val & 1;
            if(!check)
            {
                int num = mask | (1<<k);
                dp[num] = min(dp[num],dp[mask] + matrix[x][j]);
            }

        }

    }
    for(int i = 0;i<pow(2,n);i++)
        cout << dp[i] << " ";
    cout << endl;
    cout << dp[int(pow(2,n))-1];
    return 0;
}
