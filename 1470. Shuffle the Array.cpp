class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int>nums1,nums2,ans;
        
        for(int i=0;i<n;i++)
        {
            nums1.push_back(nums[i]);
        }
        for(int i=n;i<2*n;i++)
        {
            nums2.push_back(nums[i]);
        }
        for(int i = 0, j = 0; i < n; i++, j++) {
            ans.push_back(nums1[i]);
            ans.push_back(nums2[j]);
        }
        
        return ans;
    }
};
