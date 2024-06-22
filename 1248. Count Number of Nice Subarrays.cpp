class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int odd = 0;
        int count = 0;
        int ans = 0;
        int i = 0;
        int j = 0;
        while (j < n) {
            if (nums[j] % 2 != 0) {
                odd++;
                count = 0;
            }

            while (odd == k) {
                count++;
                if (i < n && nums[i] % 2 == 1) {
                    odd--;
                }
                i++;
            }
            ans += count;
            j++;
        }
        return ans;
    }
};
