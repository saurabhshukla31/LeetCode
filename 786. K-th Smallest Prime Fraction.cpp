class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n = arr.size();

        vector<pair<double, pair<int, int>>> fractions;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                double fraction = (double)arr[i] / arr[j];
                fractions.push_back({fraction, {arr[i], arr[j]}});
            }
        }

        sort(fractions.begin(), fractions.end());

        return {fractions[k - 1].second.first, fractions[k - 1].second.second};
    }
};
