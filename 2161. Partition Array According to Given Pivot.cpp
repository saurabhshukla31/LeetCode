class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> ans;
        int j=0;
        int k=0;
        for (int i = 0; i < n; i++) {
            if (nums[i] < pivot) {
                ans.push_back(nums[i]);
            }
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] == pivot) {
                ans.push_back(nums[i]);
            }
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] > pivot) {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
