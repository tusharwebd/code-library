class Solution {
public:
    int reverse(int x) {
        long long num = 0;
        long long sum = 0;
        while(x)
        {
            num = x % 10;
            x = x/10;
            sum = sum*10 + num;
        }
        return (sum>INT_MAX||sum<INT_MIN)?0:sum;
    }
};
