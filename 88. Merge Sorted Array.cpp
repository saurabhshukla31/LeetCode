class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left=0;
        int right=0;
        int i=0;
        vector<int>ans(m+n);
        while(left<m && right<n)
        {
            if(nums1[left]<=nums2[right])
            {
                ans[i]=nums1[left];
                left++;
                i++;
            }
            else
            {
                ans[i]=nums2[right];
                right++;
                i++;
            }
        }
        while(left<m)
        {
            ans[i]=nums1[left];
            left++;
            i++;
        }
        while(right<n)
        {
            ans[i]=nums2[right];
            right++;
            i++;
        }
        nums1=ans;
    }
};
