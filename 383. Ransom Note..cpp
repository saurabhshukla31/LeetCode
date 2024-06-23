class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> mpp(256, 0);
        for (char ch : magazine) {
            mpp[ch]++;
        }
        for (char ch : ransomNote) {
            if (mpp[ch] == 0) {
                return false;
            }
            mpp[ch]--;
        }
        return true;
    }
};
