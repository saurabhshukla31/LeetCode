class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;
        int a,b;
        while(n!=0)
        {
            a=*min_element(nums.begin(), nums.end());
            nums.erase(find(nums.begin(),nums.end(),a));
            b=*min_element(nums.begin(), nums.end());
            nums.erase(find(nums.begin(),nums.end(),b));
            arr.push_back(b);
            arr.push_back(a);
            n = nums.size();
        }
        return arr;
    }
};
