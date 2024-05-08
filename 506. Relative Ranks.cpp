class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<int>temp(n);
        temp=score;
        unordered_map<int,int>rank;
        for(int i=0;i<n;i++)
        {
            rank[temp[i]]=i;
        }
        sort(temp.begin(), temp.end(), greater<int>());
        vector<string>ans(n);
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                ans[rank[temp[i]]]="Gold Medal";
            }
            else if(i==1)
            {
                ans[rank[temp[i]]]="Silver Medal";
            }
            else if(i==2)
            {
                ans[rank[temp[i]]]="Bronze Medal";
            }
            else
            {
                ans[rank[temp[i]]]=to_string(i+1);
            }
        }
        return ans;
    }
};
