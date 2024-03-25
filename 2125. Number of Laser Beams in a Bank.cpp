class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int prevcount = 0;
        int result = 0;
        for (int i = 0; i < n; i++) {
            int nowcount = 0;
            for (char& ch : bank[i]) {
                if (ch == '1') {
                    nowcount++;
                }
            }
            result += (nowcount * prevcount);
            if (nowcount != 0) {
                prevcount = nowcount;
            }
        }
        return result;
    }
};
