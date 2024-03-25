class Solution {
public:
int digits(int num)
{
    int sum=0;
    while(num!=0)
    {
        num/=10;
        sum++;
    }
    return sum;
}
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(digits(nums[i])%2==0)
            {
                count++;
            }
        }
        return count;
    }
};
