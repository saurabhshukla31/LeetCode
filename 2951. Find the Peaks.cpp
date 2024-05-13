class Solution {
public:
    vector<int> findPeaks(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        for (int i = 1; i < n - 1; i++) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
