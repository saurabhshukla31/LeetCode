class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        set<int> temp;
        for (int i = 0; i < n; i++) {
            temp.insert(nums[i]);
        }
        vector<int> ans;
        for (auto& it : temp) {
            ans.push_back(it);
        }
        int maxi = INT_MIN;
        for (int i = 0; i < ans.size(); i++) {
            if (ans.size() <= 2) {
                maxi=*max_element(ans.begin(), ans.end());
                return maxi;
            } else {
                sort(ans.begin(),ans.end());
                return ans[ans.size()-3];
            } 
        }
        return 0;
    }
};
