class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int left = 0;
        int right = 0;
        int i = 0;
        vector<int> ans(m + n);
        while (left < m && right < n) {
            if (nums1[left] <= nums2[right]) {
                ans[i] = nums1[left];
                left++;
                i++;
            } else {
                ans[i] = nums2[right];
                right++;
                i++;
            }
        }
        while (left < m) {
            ans[i] = nums1[left];
            left++;
            i++;
        }
        while (right < n) {
            ans[i] = nums2[right];
            right++;
            i++;
        }
        nums1 = ans;
        int size = nums1.size();
        if (size % 2 != 0) {
            return nums1[size / 2];
        } else {
            return (nums1[size / 2 - 1] + nums1[size / 2]) / 2.0;
        }
        return 0;
    }
};
