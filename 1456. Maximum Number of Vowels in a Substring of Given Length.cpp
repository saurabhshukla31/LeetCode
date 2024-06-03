class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int i = 0;
        int j = 0;
        auto isvowel = [](char ch) {
            return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||
                    ch == 'u');
        };
        int count = 0;
        int max_count = 0;
        while (j < n) {
            if (isvowel(s[j])) {
                count++;
            }
            if (j - i + 1 == k) {
                max_count = max(count, max_count);
                if (isvowel(s[i])) {
                    count--;
                }
                i++;
            }
            j++;
        }
        return max_count;
    }
};
