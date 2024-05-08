class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        int j = 0;
        for (int i = 0; i < n && j < n; i++) {
            ans[j] = arr[i];
            j++;
            if (arr[i] == 0 && j < n) {
                ans[j] = 0;
                j++;
            }
        }
        arr = ans;
    }
};
