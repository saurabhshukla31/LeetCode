class Solution {
public:
    bool is_possible(int k, vector<int>& piles, int h) {
        int sum = 0;
        for (int i = 0; i < piles.size(); i++) {
            sum += ceil((piles[i] * 1.0) / k);
        }

        return (sum <= h);
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = 1e9;
        while (left < right) {
            int mid = (left + right) / 2;
            if (is_possible(mid, piles, h)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};
