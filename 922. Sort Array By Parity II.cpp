class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int oddindex = 1;
        int evenindex = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                ans[evenindex] = nums[i];
                evenindex += 2;

            } else {
                ans[oddindex] = nums[i];
                oddindex += 2;
            }
        }
        return ans;
    }
};
