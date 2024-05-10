class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int count = 0;
        int i = 0;
        int p = n - 1;
        while (i < p) {
            if (nums[i] == k - nums[p]) {
                count++;
                i++;
                p--;
            } else if (nums[i] + nums[p] < k) {
                i++;
            } else {
                p--;
            }
        }
        return count;
    }
};
