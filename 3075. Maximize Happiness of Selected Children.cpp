class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        int n = happiness.size();
        sort(happiness.begin(), happiness.end());
        long long maxi = 0;
        for (int i = 0; i < k; i++) {
            if (happiness[n - 1 - i] >= i) {
                maxi += happiness[n - 1 - i] - i;
            }
        }
        return maxi;
    }
};
