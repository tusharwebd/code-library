class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

        int N = coins.size();
        int arr[N+1][amount+1];
        memset(arr,0,sizeof(arr));
        for(int j = 0;j<=amount;j++)
            arr[0][j] = INT_MAX-1;
        for(int i = 1;i<=N;i++)
            arr[i][0] = 0;
        for(int j = 1;j<=amount;j++)
        {
            if(j%coins[0]==0)
                arr[1][j] = j/coins[0];
            else
                arr[1][j] = INT_MAX-1;
        }
        for(int i = 2;i<=N;i++)
        {
            for(int j = 1;j<=amount;j++)
            {
                if(coins[i-1]<=j)
                    arr[i][j] = min(1+arr[i][j-coins[i-1]],arr[i-1][j]);
                else
                    arr[i][j] = arr[i-1][j];
            }
        }
        if(arr[N][amount]==INT_MAX-1)
            return -1;
        return arr[N][amount];


    }
};
