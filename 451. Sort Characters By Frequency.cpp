class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mpp;
        string ans;
        for (char ch : s) {
            mpp[ch]++;
        }
        vector<pair<int, char>> freq;
        for (auto it : mpp) {
            freq.push_back({it.second, it.first});
        }
        sort(freq.begin(), freq.end(), greater<pair<int, char>>());
        for (auto it : freq) {
            ans.append(it.first, it.second);
        }
        return ans;
    }
};
