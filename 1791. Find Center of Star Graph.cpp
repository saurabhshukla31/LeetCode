class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        int ans = 0;
        vector<int> arr;
        unordered_map<int, int> mpp;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                arr.push_back(edges[i][j]);
            }
        }
        for (auto it : arr) {
            mpp[it]++;
        }
        for (auto it : mpp) {
            if (it.second == 2) {
                ans = it.first;
            }
        }
        return ans;
    }
};
