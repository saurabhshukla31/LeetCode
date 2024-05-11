class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int week = 0;
        int days = 1;
        for (int i = 0; i < n; i++) {
            total += days;
            if ((i + 1) % 7 == 0) {
                week++;
                days = week + 1;
            } else {
                days++;
            }
        }
        return total;
    }
};
