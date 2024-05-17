class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= '0' && s[i] <= '9')) {
                temp.push_back(s[i]);
            }
        }
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] >= 'A' && temp[i] <= 'Z') {
                temp[i] += 32;
            }
        }
        string rev;
        rev = temp;
        int left = 0;
        int right = temp.size() - 1;
        while (left < right) {
            swap(temp[left], temp[right]);
            left++;
            right--;
        }
        if (rev == temp) {
            return true;
        }
        return false;
    }
};
