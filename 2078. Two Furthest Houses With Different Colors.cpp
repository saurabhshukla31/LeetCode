class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int sum = 0;
        int max_sum = 0;
        for (int i = 0; i < colors.size(); i++) {
            sum = 0;
            for (int j = 0; j < colors.size(); j++) {
                if (colors[i] != colors[j]) {
                    sum = abs(i - j);
                }
            }
            max_sum = max(sum, max_sum);
        }
        return max_sum;
    }
};
