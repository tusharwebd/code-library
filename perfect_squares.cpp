class Solution {
public:
    int numSquares(int n) {
        vector<int> res(n+1,INT_MAX);
        res[0] = 0;
        for(int i = 1; i<=n;i++){
            for(int j = 1;j*j<=i;j++)
            {
                int temp = j*j;
                res[i] = min(res[i],res[i-temp]+1);
            }
        }
        return res[n];
    }
};
