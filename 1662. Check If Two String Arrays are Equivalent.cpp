class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string temp1;
        string temp2;
        for (string ch : word1) {
            temp1+=ch;
        }
        for (string ch : word2) {
            temp2+=ch;
        }
        return temp1 == temp2;
    }
};
