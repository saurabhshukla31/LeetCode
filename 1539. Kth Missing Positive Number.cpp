class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> missing;
        int i = 0;
        int current = 1;
        while (missing.size() < k) {
            if (i >= arr.size() || arr[i] != current) {
                missing.push_back(current);
            } else {
                i++;
            }
            current++;
        }
        return missing[k - 1];
    }
};
