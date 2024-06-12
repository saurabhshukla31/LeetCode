class Solution {
public:
    void sortColors(vector<int>& nums) {
        int p1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                swap(nums[p1], nums[i]);
                p1++;
            }
        }
        int p2 = p1;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == 1) {
                swap(nums[p2], nums[j]);
                p2++;
            }
        }
    }
};
