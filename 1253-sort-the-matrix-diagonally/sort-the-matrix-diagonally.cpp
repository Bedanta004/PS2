class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();

        for (int i = 0; i < m; i++) {
            sortDiagonal(mat, i, 0, m, n);
        }

        for (int j = 1; j < n; j++) {
            sortDiagonal(mat, 0, j, m, n);
        }

        return mat;
    }
    void sortDiagonal(vector<vector<int>>& mat, int row, int col, int m, int n) {
        vector<int> diagonal;

        int r = row, c = col;
        while (r < m && c < n) {
            diagonal.push_back(mat[r][c]);
            r++;
            c++;
        }

        sort(diagonal.begin(), diagonal.end());

        r = row;
        c = col;
        for (int val : diagonal) {
            mat[r][c] = val;
            r++;
            c++;
        }
    }
};
