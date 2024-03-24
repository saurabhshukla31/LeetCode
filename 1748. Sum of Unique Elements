class Solution {
public:
    int sumOfUnique(vector<int>& nums) 
    {
        int n = nums.size();
        int flag;
        int sum = 0;
        for (int i = 0; i < n; i++) 
        {
            flag = 0;
            if (nums[i] == -1) 
            {
                continue;
            }
            for (int j = i + 1; j < n; j++) 
            {
                if (nums[i] == nums[j]) 
                {
                    nums[j] = -1;
                    flag = 1;
                }
            }
            if (flag == 0) 
            {
                sum += nums[i];
            }
        }
        return sum;
    }
};
