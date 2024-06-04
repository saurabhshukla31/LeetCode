class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.length();
        vector<int> mpp(26, 0);
        for (int i = 0; i < n; i++) {
            mpp[sentence[i] - 'a']++;
        }
        for (int i = 0; i < mpp.size(); i++) {
            if (mpp[i] >= 1) {
            } else {
                return false;
            }
        }
        return true;
    }
};
