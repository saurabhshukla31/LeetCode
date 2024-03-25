#include <cmath>
class Solution {
public:
    bool isPowerOfFour(int n) {
        int x;
        for(int i=0;i<16;i++)
        {
            x=pow(4,i);
            if(x==n)
            {
                return true;
            }
            else if(x>n)
            {
                return false;
            }
        }
        return false;
    }
};
