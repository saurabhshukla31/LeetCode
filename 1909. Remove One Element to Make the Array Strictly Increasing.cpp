class Solution {
public:
    bool inc(vector<int>& nums) {
        int flag = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (!(nums[i - 1] < nums[i])) {
                flag = 1;
            }
        }
        if (flag == 0) {
            return true;
        }
        return false;
    }
    bool canBeIncreasing(vector<int>& nums) {
        vector<int> temp(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            temp.erase(temp.begin() + i);
            if (inc(temp)) {
                return true;
            }
            temp.insert(temp.begin() + i, nums[i]);
        }
        return false;
    }
};
