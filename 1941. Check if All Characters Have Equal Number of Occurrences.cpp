class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<int, int> mpp;
        for (auto it : s) {
            mpp[it]++;
        }
        vector<int> ans;
        for (auto it : mpp) {
            ans.push_back(it.second);
        }
        int ele = ans[0];
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] != ele) {
                return false;
            }
        }
        return true;
    }
};
