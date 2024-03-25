class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int predicted_sum=0;
        int actual_sum=(n*(n+1))/2;
        for(int i=0;i<n;i++)
        {
            predicted_sum+=nums[i];
        }
        int ans = actual_sum-predicted_sum;
        return ans;
    }
};
