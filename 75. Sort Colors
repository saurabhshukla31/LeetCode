class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int count_zero=0;
        int count_one=0;
        int count_two=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                count_zero++;
            }
            else if(nums[i]==1)
            {
                count_one++;
            }
            else
            {
                count_two++;
            }
        }
        for(int i=0;i<count_zero;i++)
        {
            nums[i]=0;
        }
        int c=1;
        for(int i=count_zero;;i++)
        {
            if(c>count_one)
            {
                break;
            }
            nums[i]=1;
            c++;
        }
        c=1;
        for(int i=count_one+count_zero;;i++)
        {
            if(c>count_two)
            {
                break;
            }
            nums[i]=2;
            c++;
        }
    }
};
