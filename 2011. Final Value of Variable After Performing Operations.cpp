class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for (string ch : operations) {
            if (ch == "++X" || ch == "X++") {
                ans++;
            } else if (ch == "--X" || ch == "X--") {
                ans--;
            }
        }
        return ans;
    }
};
