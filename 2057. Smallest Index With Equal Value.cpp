class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int n=nums.size();
        int index=0;
        for(int i=0;i<n;i++)
        {
            if(i%10 == nums[i])
            {
                return index;
            }
            else
            {
                index++;
            }
        }
        return -1;
    }
};
