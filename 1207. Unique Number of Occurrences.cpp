class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        int counts = 0;
        int flag = 0;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n-1; i++) {
            if (arr[i] == arr[i + 1]) {
                counts++;
            } else {
                ans.push_back(counts+1);
                counts = 0;
            }
        }
        counts=0;
        for(int i=n-1;i>0;i--)
        {
            if (arr[i] == arr[i -1])
            {
                counts++;
            }
            else
            {
                ans.push_back(counts+1);
                break;
            }
        }
        sort(ans.begin(), ans.end());
        for (int i = 1; i < ans.size(); i++) {
            if (ans[i] == ans[i - 1]) {
                flag = 1;
            }
        }
        if (flag == 0) {
            return true;
        } else {
            return false;
        }
        return true;
    }
};
