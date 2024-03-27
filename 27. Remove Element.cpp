class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int pointer=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=val)
            {
                swap(nums[i],nums[pointer]);
                pointer++;
            }
        }
        return pointer;
    }
};
