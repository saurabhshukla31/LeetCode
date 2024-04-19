class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int elesum=0;
        int digitsum=0;
        for(int i=0;i<n;i++)
        {
            elesum+=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            while(nums[i]!=0)
            {
                int rem = nums[i]%10;
                digitsum = digitsum + rem;
                nums[i]=nums[i]/10;
            }
        }
        return elesum-digitsum;
    }
};
