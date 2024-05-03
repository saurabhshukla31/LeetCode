class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int count;
        int maxcount=0;
        int index=0;
        for(int i=0;i<mat.size();i++)
        {
            count=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    count++;
                }
            }
            if(count>maxcount)
            {
                maxcount=count;
                index=i;
            }
        }
        vector<int>ans={index,maxcount};
        return ans;
    }
};
