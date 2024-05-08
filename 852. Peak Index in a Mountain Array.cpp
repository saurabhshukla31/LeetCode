class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int start=0;
        int end=n-1;
        while(start<=end)
        {
            if(arr[start+1]>arr[start])
            {
                start++;
            }
            else if(arr[end]<arr[end-1])
            {
                end--;
            }
            else
            {
                break;
            }
        }
        return start;
    }
};
