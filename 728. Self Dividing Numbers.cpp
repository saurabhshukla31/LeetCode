class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int num = left; num <= right; num++) {
            int temp = num;
            int flag = 1;
            while (temp != 0) {
                int rem = temp % 10;
                if (rem == 0 || num % rem != 0) {
                    flag = 0;
                    break;
                }
                temp /= 10;
            }
            if (flag == 1) {
                ans.push_back(num);
            }
        }
        return ans;
    }
};
