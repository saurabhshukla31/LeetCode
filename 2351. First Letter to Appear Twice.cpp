class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> st;
        char ans;
        auto itsalreadyinset = [](char ch, set<char> &st) {
            for (auto it : st) {
                if (ch == it) {
                    return true;
                }
            }
            return false;
        };
        for (int i = 0; i < s.size(); i++) {
            if (itsalreadyinset(s[i], st)) {
                ans = s[i];
                break;
            }
            st.insert(s[i]);
        }
        return ans;
    }
};
