class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>temp;
        int product=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                return 0;
            }
            else if(nums[i]>0)
            {
                temp.push_back(1);
            }
            else if(nums[i]<0)
            {
                temp.push_back(-1);
            }
        }
        for(int i=0;i<temp.size();i++)
        {
            product*=temp[i];
        }
        if(product>0)
        {
            return 1;
        }
        else
        {
            return -1;
        }
        return 0;
    }
};
