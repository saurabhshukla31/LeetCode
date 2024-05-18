class Solution {
public:
    bool iscapital(string s) {
        for (char ch : s) {
            if (ch >= 'A' && ch <= 'Z') {
            } else {
                return false;
            }
        }
        return true;
    }
    bool issmall(string s) {
        for (char ch : s) {
            if (ch >= 'a' && ch <= 'z') {

            } else {
                return false;
            }
        }
        return true;
    }
    bool ischarcapital(char s) {
        if (s >= 'A' && s <= 'Z') {
            return true;
        }
        return false;
    }
    bool detectCapitalUse(string word) {
        if (iscapital(word)) {
            return true;
        }
        if (issmall(word)) {
            return true;
        }
        if (ischarcapital(word[0])) {
            for (int i = 1; i < word.size(); i++) {
                if (word[i] >= 'a' && word[i] <= 'z') {

                } else {
                    return false;
                }
            }
        }
        else
        {
            return false;
        }
        return true;
    }
};
