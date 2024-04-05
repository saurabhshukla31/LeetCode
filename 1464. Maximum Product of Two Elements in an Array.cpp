class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int value;
        int maximum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                value=(nums[i]-1)*(nums[j]-1);
                maximum=max(value,maximum);
            }
        }
        return maximum;
    }
};
