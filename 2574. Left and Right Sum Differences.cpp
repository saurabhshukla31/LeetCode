class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        vector<int> leftsum;
        vector<int> rightsum(n);
        vector<int> ans(n);
        if(n==1)
        {
            ans[0]=0;
            return ans;
        }
        for (int i = 0; i < n - 1; i++) {
            if (i == 0) {
                leftsum.push_back(0);
            }
            sum += nums[i];
            leftsum.push_back(sum);
        }
        sum = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (i == (n - 1)) {
                rightsum[i] = 0;
            } else {

                rightsum[i] = sum;
            }
            sum += nums[i];
        }

        for (int i = 0; i < n; i++) {
            ans[i]=(abs(leftsum[i] - rightsum[i]));
        }
        return ans;
    }
};
