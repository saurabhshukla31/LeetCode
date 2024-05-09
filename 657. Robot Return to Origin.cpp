class Solution {
public:
    bool judgeCircle(string moves) {
        int U = 0;
        int D = 0;
        int L = 0;
        int R = 0;
        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] == 'U') {
                U++;
            } else if (moves[i] == 'D') {
                D++;
            } else if (moves[i] == 'L') {
                L++;
            } else {
                R++;
            }
        }
        return U == D && L == R;
    }
};
