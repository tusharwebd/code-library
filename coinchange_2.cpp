class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int N = coins.size();
        int arr[N+1][amount+1];
        memset(arr,0,sizeof(arr));
        for(int i = 0;i<N+1;i++)
            arr[i][0] = 1;
        for(int j = 1;j<amount+1;j++)
            arr[0][j] = 0;
        for(int i = 1;i<=N;i++)
        {
            for(int j = 1;j<=amount;j++)
            {
                if(coins[i-1]<=j)
                    arr[i][j] = arr[i][j-coins[i-1]] + arr[i-1][j];
                else
                    arr[i][j] = arr[i-1][j];
            }
        }
        return arr[N][amount];
    }
};
