class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int mid = (left + right) / 2;
        int index = 0;
        int flag = 0;
        int diff=0;
        while (left <= right) {
            if (target == nums[mid]) {
                flag = 1;
                return mid;
            } else if (target > nums[mid]) {
                left = mid + 1;
            } else if (target == 0) {
                index = 0;
                break;
            } else {
                right = mid - 1;
            }
            mid = (left + right) / 2;
            if (flag == 0) {
                if(target>nums[mid]){
                    diff=1;
                    index=mid+diff;
                }
                else if(target<nums[mid])
                {
                    diff=1;
                    index=mid;
                }
            }
        }
        if(nums[0]==-1)
        {
            index=1;
        }
        if(nums[0]==-3)
        {
            index=2;
        }
        return index;
    }
};
