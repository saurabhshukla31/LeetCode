class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        int n=arr.size();
        int luckynumber=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==-1)
                {
                    continue;
                }
            int freq=1;
            for(int j=i+1;j<n;j++)
            {
                
                if(arr[i]==arr[j] )
                {
                    freq++;
                    arr[j]=-1;
                }
            }
            if(arr[i]==freq)
            {
                if(freq>luckynumber)
                {
                    luckynumber=freq;
                }
                
            }
        }
        return luckynumber;
    }
};
