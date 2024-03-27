class Solution {
public:
    bool isPowerOfTwo(int n) {
        while (true) {
            if (n > 0 && n % 2 == 0) {
                n = n / 2;
            }
            if (n == 1) {
                return true;
            }
            else if(n!=1 && n%2!=0)
            {
                return false;
            }
            else if(n==0 || n<0)
            {
                return false;
            }
        }
    }
};
