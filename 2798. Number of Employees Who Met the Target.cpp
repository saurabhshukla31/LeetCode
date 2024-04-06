class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int n=hours.size();
        int target_hours=0;
        for(int i=0;i<n;i++)
        {
            if(hours[i]>=target)
            {
                target_hours++;
            }
        }
        return target_hours;
    }
};
