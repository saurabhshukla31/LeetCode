class Solution {
public:
bool linearsearch(vector<int>& arr,int num,int k)
{
    for(int i=0;i<arr.size();i++)
    {
        if(i==k)
        {
            continue;
        }
        if(arr[i]==num)
        {
            return true;
        }
    }
    return false;
}
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(linearsearch(arr,arr[i]*2,i) )
            {
                return true;
            }
        }
        return false;
    }
};
