class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int max=nums[0];
        int index=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
                index=i;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(max==nums[i])
            {
                continue;
            }
            if(max<(nums[i]*2))
            {
                return -1;
            }
        }
        return index;
    }
};
