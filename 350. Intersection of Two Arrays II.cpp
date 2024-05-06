class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> ans;
        int ptr1 = 0;
        int ptr2 = 0;
        while (ptr1 < n1 && ptr2 < n2) {
            if (nums1[ptr1] < nums2[ptr2]) {
                ptr1++;
            } else if (nums1[ptr1] > nums2[ptr2]) {
                ptr2++;
            } else {
                ans.push_back(nums1[ptr1]);
                ptr1++;
                ptr2++;
            }
        }
        return ans;
    }
};
