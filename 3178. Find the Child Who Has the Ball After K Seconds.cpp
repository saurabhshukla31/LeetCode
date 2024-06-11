class Solution {
public:
    int numberOfChild(int n, int k) {
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            nums[i] = i;
        }
        int curr = 0;
        int way = 1; 
        for (int i = 0; i < k; i++) {
            curr += way;
            if (curr == 0 || curr == n - 1) {
                way = -way;
            }
        }
        return nums[curr];
    }
};
