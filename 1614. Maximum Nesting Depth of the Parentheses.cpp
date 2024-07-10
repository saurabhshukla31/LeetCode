class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int size = 0;
        int ans = 0;
        for (char ch : s) {
            if (ch == '(') {
                st.push(ch);
                size = st.size();
                ans = max(size, ans);
            } else if (ch == ')') {
                size = st.size();
                ans = max(size, ans);
                st.pop();
            }
        }
        return ans;
    }
};
