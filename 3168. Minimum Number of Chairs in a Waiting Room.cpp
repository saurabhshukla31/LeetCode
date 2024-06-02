class Solution {
public:
    int minimumChairs(string s) {
        int count = 0;
        int max_count=0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'E') {
                count++;
            } else if (s[i] == 'L') {
                count--;
            }
            max_count=max(count,max_count);
        }
        return max_count;
    }
};
