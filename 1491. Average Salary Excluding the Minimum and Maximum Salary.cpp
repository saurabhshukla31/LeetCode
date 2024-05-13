class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int sum = 0;
        int size = 0;
        for (int i = 0; i < n; i++) {
            if (salary[i] > maxi) {
                maxi = salary[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(salary[i]<mini)
            {
                mini=salary[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if (salary[i] != maxi && salary[i] != mini) {
                sum += salary[i];
                size++;
            }
        }
        double avg = static_cast<double>(sum) / size;
        return avg;
    }
};
