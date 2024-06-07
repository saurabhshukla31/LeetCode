class Solution {
public:
    double nthPersonGetsNthSeat(int n) {
        if (n == 1) {
            return n;
        }
        double temp = n * 2;
        return n / temp;
    }
};
