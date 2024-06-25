class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());

        double smallest = DBL_MAX;
        for (int i = 0; i < n / 2; i++) {
            double avg = (nums[i] + nums[n - 1 - i]) / 2.0;
            if (avg < smallest) {
                smallest = avg;
            }
        }

        return smallest;
    }
};
