class Solution {
public:
bool binarysearch(int target,vector<int>& nums)
{
    int n=nums.size();
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(target==nums[mid])
        {
            return false;
        }
        else if(target>nums[mid])
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return true;
}
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<=100001;i++)
        {
            if(binarysearch(i,nums))
            {
                return i;
            }
        }
        return 0;
    }
};
