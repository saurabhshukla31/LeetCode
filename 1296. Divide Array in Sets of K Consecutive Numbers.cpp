class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n = nums.size();
        if (n % k != 0) {
            return false;
        }
        map<int, int> mpp;
        for (int num : nums) {
            mpp[num]++;
        }
        for (auto [num, freq] : mpp) {
            while (freq--) {
                for (int curr = num; curr < num + k; curr++) {
                    if (mpp[curr] == 0) {
                        return false;
                    } else {
                        mpp[curr]--;
                    }
                }
            }
        }
        return true;
    }
};
