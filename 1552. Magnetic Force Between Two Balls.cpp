class Solution {
public:
    bool ispossible(int ans, vector<int>& arr, int m) {
        int k = arr[0];
        int count = 1;
        for (int i = 1; i < arr.size(); i++) {
            int j = arr[i];
            if (j - k >= ans) {
                count++;
                k = j;
            }
            if (count == m) {
                return true;
            }
        }
        return count == m;
    }
    
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(), position.end());
        int mini = 1; 
        int maxi = position[n-1] - position[0];
        int ans = 0;
        
        while (mini <= maxi) {
            int mid = mini + (maxi - mini) / 2;
            if (ispossible(mid, position, m)) {
                ans = mid;
                mini = mid + 1;
            } else {
                maxi = mid - 1;
            }
        }
        return ans;
    }
};
