class Solution {
public:
    int maxSatisfaction(std::vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int sum = 0;
        int maxi = 0;

        for (int i = 0; i < n; ++i) {
            sum = 0;
            for (int j = i; j < n; ++j) {
                sum += arr[j] * (j - i + 1);
            }
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};
