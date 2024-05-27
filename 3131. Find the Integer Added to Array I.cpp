class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        for (auto it : nums1) {
            if (it < min1) {
                min1 = it;
            }
        }
        for (auto it : nums2) {
            if (it < min2) {
                min2 = it;
            }
        }
        return min2-min1;
    }
};
