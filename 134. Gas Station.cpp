class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        auto sum=[](vector<int> arr) {
        int total = 0;
        for (int i = 0; i < arr.size(); i++) {
            total += arr[i];
        }
        return total;
    };
        int tank = 0;
        int ans = 0;
        if (sum(gas) < sum(cost)) {
            return -1;
        }
        for (int i = 0; i < gas.size(); i++) {
            tank += (gas[i] - cost[i]);
            if (tank < 0) {
                tank = 0;
                ans = i + 1;
            }
        }
        return ans;
    }
};
