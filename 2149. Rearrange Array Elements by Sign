class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> v1;
        vector<int> v2;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                v1.push_back(nums[i]);
            } else if (nums[i] < 0) {
                v2.push_back(nums[i]);
            }
        }
        int c1 = 0;
        int c2 = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                ans.push_back(v1[c1]);
                c1++;
            }
            if (i % 2 != 0 ) {
                ans.push_back(v2[c2]);
                c2++;
            }
        }
        return ans;
    }
};
