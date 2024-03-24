class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<int> nums;
        int n = height.size();
        int max_water = 0;
        int water = 0;
        int width;
        int length;
        for (int i = 0; i < n; i++) {
            if(height[i]*(n-1)>max_water)
            {
            for (int j = n - 1; j >= i; j--) {
                length = j - i;
                width = min(height[i], height[j]);
                water = length * width;
                max_water = max(water, max_water);
            }
            }
        }
        return max_water;
    }
};
