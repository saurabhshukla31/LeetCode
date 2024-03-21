class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minimum=prices[0];
        int max_profit=0;
        int profit=0;
        for(int i=1;i<n;i++)
        {
            profit=prices[i]-minimum;
            max_profit=max(profit,max_profit);
            minimum=min(prices[i],minimum);
        }
        return max_profit;
    }
};
