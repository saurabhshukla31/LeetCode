class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (nums[i] < mini) {
                mini = nums[i];
            }
        }
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += nums[j];
        }
        return sum - n * mini;
    }
};
