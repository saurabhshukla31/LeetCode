class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 != 0) {
                odd.push_back(nums[i]);
            } else {
                even.push_back(nums[i]);
            }
        }
        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end());
        int even_index = 0;
        int odd_index = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 != 0) {
                nums[i] = odd[odd_index];
                odd_index++;
            } else {
                nums[i] = even[even_index];
                even_index++;
            }
        }
        return nums;
    }
};
