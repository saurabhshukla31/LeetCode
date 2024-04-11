class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int digit;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int temp = nums[i];
            vector<int> tempDigits; 
            while (temp > 0) {
                digit = temp % 10;
                tempDigits.push_back(digit);
                temp = temp / 10;
            }
            for (int j = tempDigits.size() - 1; j >= 0; j--) {
                ans.push_back(tempDigits[j]);
            }
        }
        return ans;
    }
};
