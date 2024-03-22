class Solution {
public:
    bool isPalindrome(int x) {
        long temp = x;
        long rem = 0;
        long rev;
        if (x >= 0) {
            while (x != 0) {
                rem = x % 10;
                rev = rev * 10 + rem;
                x = x / 10;
            }
        }
        if (temp == rev) {
            return true;
        } else {
            return false;
        }
    }
};
