class Solution {
public:
    bool checkPerfectNumber(int num) {
        int i=1;
        int sum=0;
        if(num==1)
        {
            return false;
        }
        while(true)
        {
            if(num%i==0){
                sum+=i;
            }
            i++;
            if(i>=num)
            {
                break;
            }
        }
        if(num==sum){
            return true;
        }
        else
        {
            return false;
        }
    }
};
