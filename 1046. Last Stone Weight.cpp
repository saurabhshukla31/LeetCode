class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        int last = 0;
        int slast = 0;
        for (int i = 0;; i++) {
            sort(stones.begin(), stones.end());
            n = stones.size();
            if (n == 0) {
                return 0;
            }
            if (n == 1) {
                return stones[0];
            }
            last = n - 1;
            slast = n - 2;
            if (stones[last] == stones[slast]) {
                stones.pop_back();
                stones.pop_back();
            } else if (stones[last] != stones[slast]) {
                stones.pop_back();
                stones.pop_back();
                stones.push_back(stones[last]-stones[slast]);
            }
        }
        return 0;
    }
};
