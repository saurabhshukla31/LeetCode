class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) {
            return 0;
        }
        long max_diff = 0;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i++) {
            long diff = nums[i] - nums[i - 1];
            max_diff = max(max_diff, diff);
        }
        return max_diff;
    }
};
