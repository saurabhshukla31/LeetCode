class Solution {
public:
    int position(string t, char temp) {
        int index = 0;
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == temp) {
                index = i;
                break;
            }
        }
        return index;
    }
    int findPermutationDifference(string s, string t) {
        int diff = 0;
        for (int i = 0; i < s.size(); i++) {
            int pos = position(t, s[i]);
            diff += abs(i - pos);
        }
        return diff;
    }
};
