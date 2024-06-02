class Solution {
public:
    void reversestring(int end, string &word) {
        int start = 0;
        while (start < end) {
            swap(word[start], word[end]);
            start++;
            end--;
        }
    }
    string reversePrefix(string word, char ch) {
        int index = 0;
        for (int i = 0; i < word.size(); i++) {
            if (word[i]==ch) {
                index = i;
                break;
            }
        }
        reversestring(index, word);
        return word;
    }
};
