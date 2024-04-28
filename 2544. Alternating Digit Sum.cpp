class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> arr;
        while (n != 0) {
            int rem = n % 10;
            arr.push_back(rem);
            n /= 10;
        }
        reverse(arr.begin(), arr.end());
        for (int i = 1; i < arr.size(); i += 2) {

            arr[i] *= -1;
        }
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
        }
        return sum;
    }
};
