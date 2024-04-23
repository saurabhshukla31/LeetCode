class Solution {
public:
int sum(int num)
{
    int temp=0;
    while(num!=0)
    {
        int rem=num%10;
        temp+=rem;
        num/=10;
    }
    return temp;
}
    int addDigits(int num) {
        while(num>9)
        {
            num=sum(num);
        }
        return num;
    }
};
