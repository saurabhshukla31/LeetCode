class Solution {
public:
    bool isPowerOfThree(int n) {
        int x;
        for(int i=0;i<20;i++)
        {
            x=pow(3,i);
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
