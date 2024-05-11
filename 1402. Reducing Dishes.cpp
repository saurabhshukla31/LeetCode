class Solution {
public:
    int maxSatisfaction(std::vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int totalSatisfaction = 0;
        int maxTotalSatisfaction = 0;

        for (int i = 0; i < n; ++i) {
            totalSatisfaction = 0;
            for (int j = i; j < n; ++j) {
                totalSatisfaction += arr[j] * (j - i + 1);
            }
            maxTotalSatisfaction = max(maxTotalSatisfaction, totalSatisfaction);
        }
        return maxTotalSatisfaction;
    }
};
