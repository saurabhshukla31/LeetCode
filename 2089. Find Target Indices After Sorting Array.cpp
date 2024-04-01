class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int index = 0;
        for (int i = 0; i < n; i++) {
            if (nums[index] == target) {
                ans.push_back(index);
                nums[index] *= -1;
            }
            index++;
        }
        return ans;
    }
};
