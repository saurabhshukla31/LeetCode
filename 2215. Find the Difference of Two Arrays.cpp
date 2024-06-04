class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1, s2;
        for (auto it : nums1) {
            s1.insert(it);
        }
        for (auto it : nums2) {
            s2.insert(it);
        }
        vector<vector<int>> ans(2);
        for (auto st : s1) {
            if (s2.count(st) == 0) {
                ans[0].push_back(st);
            }
        }
        for (auto st : s2) {
            if (s1.count(st) == 0) {
                ans[1].push_back(st);
            }
        }
        return ans;
    }
};
