class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> temp(n);
        temp = nums;
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = n - 1;
        while (left < right) {
            if (nums[left] + nums[right] == target) {
                break;
            } else if (nums[left] + nums[right] < target) {
                left++;
            } else {
                right--;
            }
        }
        int ans1 = -1;
        int ans2 = -1;
        for (int i = 0; i < n; i++) {
            if (temp[i] == nums[left] && ans1 == -1) {
                ans1 = i;
            } else if (temp[i] == nums[right] && ans2 == -1) {
                ans2 = i;
            }
        }
        return {ans1, ans2};
    }
};
 