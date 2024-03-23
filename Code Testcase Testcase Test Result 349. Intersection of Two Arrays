class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>ans;
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(nums1[i] == nums2[j])
                {
                    int counted = count(ans.begin(), ans.end(), nums2[j]);
                    if(!counted>0)
                    {
                    ans.push_back(nums2[j]);
                    }
                }
            }
        }
        return ans;
    }
};
