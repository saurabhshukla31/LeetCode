class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for (int num : nums) {
            mpp[num]++;
        }
        int maxi = 0;
        for (auto it : mpp) {
            if (it.second > maxi) {
                maxi = it.second;
            }
        }
        int sum = 0;
        for (auto it : mpp) {
            if (it.second == maxi) {
                sum += it.second;
            }
        }
        return sum;
    }
};
