class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> mpp;
        int n = heights.size();
        for (int i = 0; i < n; i++) {
            mpp.insert({heights[i], names[i]});
        }
        vector<string> ans;
        for (auto it : mpp) {
            ans.push_back(it.second);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
