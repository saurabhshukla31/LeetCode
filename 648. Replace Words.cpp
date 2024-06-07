class Solution {
public:
    string getroot(string& word, unordered_set<string>& st) {
        for (int i = 1; i <= word.size(); i++) {
            string root = word.substr(0, i);
            if (st.count(root)) {
                return root;
            }
        }
        return word;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> st(begin(dictionary), end(dictionary));
        stringstream ss(sentence);
        string word;
        string ans;
        while (getline(ss, word, ' ')) {
            ans += getroot(word, st) + " ";
        }
        ans.pop_back();
        return ans;
    }
};
