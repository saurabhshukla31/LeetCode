class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> ans;

        long long a = num/3;
        long long b = a - 1;
        long long c = a + 1;

        if (a + b + c == num) {
            ans.push_back(b);
            ans.push_back(a);
            ans.push_back(c);
        }

        return ans;
    }
};
