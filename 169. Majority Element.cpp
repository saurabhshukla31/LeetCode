class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 0;
        int max_count = 0;
        int ans = 0;
        if (n == 1) {
            return nums[0];
        }
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                count = 0;
            }
            if (count > max_count) {
                max_count = count;
                ans = nums[i];
            }
        }
        return ans;
    }
};
