class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, 0);
        for (int i = n - 2; i >= 0; --i) {
            int j = i + 1;
            while (j < n) {
                if (arr[j] > arr[i]) {
                    ans[i] = j - i;
                    break;
                } else if (ans[j] == 0) {
                    break;
                } else {
                    j += ans[j];
                }
            }
        }
        return ans;
    }
};
