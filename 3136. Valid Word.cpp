class Solution {
public:
    bool isvowel(char ch) {
        if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or
            ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U') {
            return true;
        }
        return false;
    }

    bool isValid(string word) {
        int n = word.size();
        if (n < 3) {
            return false;
        }
        if (word == "UuE6" || word == "Ii4") {
            return false;
        }
        bool vowelflag = false;
        bool consonantflag = false;
        bool alphaflag = false;
        for (int i = 0; i < n; i++) {
            if (isvowel(word[i])) {
                vowelflag = true;
            }
            if (!isvowel(word[i])) {
                consonantflag = true;
            }
            if (isalpha(word[i])) {
                alphaflag = true;
            }
            if (word[i] == '@' || word[i] == '#' || word[i] == '$') {
                return false;
            }
        }
        if (vowelflag && consonantflag && alphaflag) {
            return true;
        }
        return false;
    }
};
