class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> mpp;
        for (int num : nums) {
            if (num % 2 == 0) {
                mpp[num]++;
            }
        }
        int ans = -1;
        int maxi = 0;
        for (auto it : mpp) {
            if (it.second > maxi) {
                maxi = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};
