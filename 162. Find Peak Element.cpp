class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size();
        int left = 0;
        while (left < n - 1 && arr[left] < arr[left + 1]) {
            left++;
        }
        return left;
    }
};
