class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        int temp=n;
        while (n != 0) {
            int rem = n % 10;
            product *= rem;
            n = n / 10;
        }
        while (temp != 0) {
            int rem = temp % 10;
            sum += rem;
            temp = temp / 10;
        }
        return product-sum;
    }
};
