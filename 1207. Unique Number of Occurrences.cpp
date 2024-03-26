class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> ans;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int counts = 1;
            while (i + 1 < n && arr[i] == arr[i + 1]) {
                counts++;
                i++;
            }
            ans.push_back(counts + 1);
        }
        sort(ans.begin(), ans.end());
        for (int i = 1; i < ans.size(); i++) {
            if (ans[i] == ans[i - 1]) {
                return false;
            }
        }
        return true;
    }
};
