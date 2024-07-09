class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& arr) {
        int wait = 0;
        double avg_wait = 0;
        int count = 0;
        int special = 0;
        int maxi = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                special = arr[i][0] + arr[i][1];
                maxi = special;
            } else {
                special = max(special, arr[i][0]) + arr[i][1];
                maxi = special;
            }
            wait = special - arr[i][0];
            avg_wait += wait;
            count++;
        }
        return avg_wait / count;
    }
};
