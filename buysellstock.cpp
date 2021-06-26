class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(!prices.empty())
        {
            int max1 = 0;
        int min1 = prices[0];
        int profit = 0,j=0,k=0;
        for(int i = 1;i<=prices.size();++i)
        {

            if(i < prices.size())
            {

                if(k > j && prices[i] < max1)
                {
                profit += max1 - min1;
                j = k;
                if(i < prices.size())
                min1 = prices[i];
                max1 = 0;
                }
            }
            else if(k > j && i == prices.size())
                    {
                        profit += max1-min1;
                    }
            if(i < prices.size())
            {
                if(min1 > prices[i])
                {
                min1 = prices[i];
                j = i;
                }
                else if(min1 < prices[i])
                {
                    max1 = prices[i];
                    k = i;
                }
            }

        }
        return profit;
        }
        return 0;
    }
};
