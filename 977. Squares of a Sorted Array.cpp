class Solution {
public:
int square(int number)
{
	return number * number;
}
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            nums[i]=square(nums[i]);
            ans.push_back(nums[i]);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
