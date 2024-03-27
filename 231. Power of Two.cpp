#include <cmath>
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int x;
        for(int i=0;i<31;i++)
        {
            x=pow(2,i);
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
