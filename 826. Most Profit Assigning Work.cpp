class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit,
                            vector<int>& worker) {
        vector<pair<int, int>> arr;
        int n = difficulty.size();
        int m = worker.size();
        for (int i = 0; i < n; i++) {
            arr.push_back({difficulty[i], profit[i]});
        }
        sort(arr.begin(), arr.end());
        sort(worker.begin(), worker.end());
        int sum = 0;
        int maxprofit = 0;
        int j = 0;
        for (int i = 0; i < m; i++) {
            while (j < m && arr[j].first <= worker[i]) {
                maxprofit = max(maxprofit, arr[j].second);
                j++;
            }
            sum += maxprofit;
        }
        return sum;
    }
};
