class Solution {
public:
    int findComplement(int n) {
        if (n == 0)
            return 1;

        vector<int> binary;

        while (n != 0) {
            binary.push_back(n % 2);
            n /= 2;
        }

        for (int i = 0; i < binary.size(); i++) {
            if (binary[i] == 0) {
                binary[i] = 1;
            } else {
                binary[i] = 0;
            }
        }

        int ans = 0;
        int p = 0;
        for (int i = 0; i < binary.size(); i++) {
            ans += binary[i] * pow(2, p);
            p++;
        }
        return ans;
    }
};
