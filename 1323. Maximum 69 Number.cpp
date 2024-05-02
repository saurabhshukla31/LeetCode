#include <vector>
using namespace std;

class Solution {
public:
    int maximum69Number(int num) {
        vector<int> arr;
        while (num != 0) {
            int rem = num % 10;
            arr.push_back(rem);
            num /= 10;
        }
        int n = arr.size();
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] == 6) {
                arr[i] = 9;
                break;
            }
        }
        int number = 0;
        for(int i=n-1;i>=0;i--)
        {
            number=number*10+arr[i];
        }
        return number;
    }
};
