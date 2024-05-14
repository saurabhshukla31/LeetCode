class Solution {
public:
    void rowcall(vector<vector<int>>& arr, int i, int m) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] != 0) {
                arr[i][j] = -100000;
            }
        }
    }
    void colcall(vector<vector<int>>& arr, int j, int n) {
        for (int i = 0; i < n; i++) {
            if (arr[i][j] != 0) {
                arr[i][j] = -100000;
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    rowcall(matrix, i, m);
                    colcall(matrix, j, n);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == -100000) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
