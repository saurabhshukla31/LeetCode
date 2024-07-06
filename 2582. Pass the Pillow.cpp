class Solution {
public:
    int passThePillow(int n, int time) {
        int pillow = 1;
        int direction = 1;
        while (time--) {
            if (direction == 1) {
                if (pillow == n) {
                    direction = -1;
                }
                pillow += direction;
            } else {
                if (pillow == 1) {
                    direction = 1;
                }
                pillow += direction;
            }
        }
        return pillow;
    }
};
