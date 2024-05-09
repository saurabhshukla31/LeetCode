class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> ans;
        int j = 0;
        for (int i = 1; i <= 1000; i++) {
            if (n % i == 0) {
                ans.push_back(i);
                j++;
            }
        }
        if(j<k)
        {
            return -1;
        }
        else
        {
            return ans[k-1];
        }
    }
};
