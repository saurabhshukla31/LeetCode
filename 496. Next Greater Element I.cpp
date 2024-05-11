class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> ans(n1, -1);
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                if (nums1[i] == nums2[j]) {
                    while(j<n2 && nums2[j]<=nums1[i])
                    {
                        j++;
                    }
                    if(j<n2)
                    {
                        ans[i]=nums2[j];
                    }
                }
            }
        }
        return ans;
    }
};
