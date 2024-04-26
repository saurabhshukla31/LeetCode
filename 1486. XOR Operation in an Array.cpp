class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>nums(n);
        for(int i=0;i<n;i++)
        {
            nums[i]=start+2*i;
        }
        int xo=0;
        for(int i=0;i<n;i++)
        {
            xo=xo^nums[i];
        }
        return xo;
    }
};
