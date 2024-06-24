class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size();
        int curr = 0;
        int result = 0;
        for (int i = 0; i < n; i++) {
            if (i >= k && nums[i - k] == 2) {
                curr--;
            }
            if ((curr % 2) == nums[i]) {
                if (i + k > n) {
                    return -1;
                }
                nums[i] = 2;
                curr++;
                result++;
            }
        }
        return result;
    }
};
