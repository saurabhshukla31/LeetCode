class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int left = 0;
        int right = 0;
        for (int num : nums1) {
            for (int i = 0; i < m; i++) {
                if (num == nums2[i]) {
                    left++;
                    break;
                }
            }
        }
        for (int num : nums2) {
            for (int i = 0; i < n; i++) {
                if (num == nums1[i]) {
                    right++;
                    break;
                }
            }
        }
        vector<int> ans = {left, right};
        return ans;
    }
};
