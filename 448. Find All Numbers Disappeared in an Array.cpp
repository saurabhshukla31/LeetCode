class Solution {
public:
    bool binarysearch(const std::vector<int>& nums, int key) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == key) {
                return true;
            }
            if (nums[mid] < key) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return false;
    }

    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for (int i = 1; i <= n; i++) {
            if (!binarysearch(nums, i)) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
