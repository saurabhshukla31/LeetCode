class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int> ans0;
        vector<int> ans1;
        vector<int> temp(100001, 0);

        for (int i = 0; i < matches.size(); i++) {
            temp[matches[i][0]]++;
        }

        for (int i = 0; i < matches.size(); i++) {
            if (temp[matches[i][1]] == 0) {
                temp[matches[i][1]] = -1;
            } else if (temp[matches[i][1]] > 0) {
                temp[matches[i][1]] = -1;
            } else if (temp[matches[i][1]] == -1) {
                temp[matches[i][1]] = -2;
            }
        }

        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] > 0) {
                ans0.push_back(i);
            } else if (temp[i] == -1) {
                ans1.push_back(i);
            }
        }

        sort(ans0.begin(), ans0.end());
        sort(ans1.begin(), ans1.end());

        return {ans0, ans1};
    }
};
