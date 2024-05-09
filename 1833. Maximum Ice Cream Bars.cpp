class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int n = costs.size();
        int count = 0;
        int expense = 0;
        for (int i = 0; i < n; i++) {
            if (expense < coins && costs[i] <= coins) {
                expense += costs[i];
                if(expense>coins)
                {
                    break;
                }
                count++;
            }
        }
        return count;
    }
};
