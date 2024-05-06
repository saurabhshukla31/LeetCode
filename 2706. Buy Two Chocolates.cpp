class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int smallest = INT_MAX;
        int ssmallest = INT_MAX;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < smallest) {
                ssmallest = smallest;
                smallest = prices[i];
            } else if (prices[i] < ssmallest && prices[i] != ssmallest) {
                ssmallest = prices[i];
            }
        }
        int sum = smallest + ssmallest;
        if (sum <= money) {
            return money - sum;
        }
        return money;
    }
};
