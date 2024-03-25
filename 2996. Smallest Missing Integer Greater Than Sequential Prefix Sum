class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0] + 1;
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                sum = sum + nums[i];
                return sum;
            }
            if (nums[i] + 1 == nums[i + 1]) {
                sum = sum + nums[i];
            } else {
                sum = sum + nums[i];
                break;
            }
        }
        int flag = 0;
        while (1) {
            flag = 0;
            for (int i = 0; i < n; i++) {
                if (sum == nums[i]) {
                    flag = 1;
                }
            }
            if (flag == 1) {
                sum++;
            }
            if (flag == 0) {
                break;
            }
        }
        return sum;
    }
};
