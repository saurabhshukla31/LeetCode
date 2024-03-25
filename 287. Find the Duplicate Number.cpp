class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int index=abs(nums[i]);
            if(nums[index]<0)
            {
                ans=index;
                break;
            }
            nums[index]*=-1;
        }
        return ans;
    }
};
