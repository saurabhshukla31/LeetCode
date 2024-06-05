class Solution {
public:
    bool search(vector<int>& ans, int key, int count) {
        int occurence = 0;
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] == key) {
                occurence++;
                if (occurence == count) {
                    return true;
                }
            }
        }
        return false;
    }
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if(!search(ans,nums[i],2))
            {
                ans.push_back(nums[i]);
            }
        }
        nums = ans;
        return ans.size();
    }
};
