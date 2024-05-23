class Solution {
public:
    bool ispalindrome(string s) {
        string temp = s;
        int left = 0;
        int right = s.size()-1;
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
        return s == temp;
    }
    string firstPalindrome(vector<string>& words) {
        for (string ch : words) {
            if (ispalindrome(ch)) {
                return ch;
            }
        }
        return "";
    }
};
