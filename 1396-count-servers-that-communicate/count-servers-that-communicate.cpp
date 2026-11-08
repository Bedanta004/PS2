class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int cnt = 0;
        int m = grid.size(), n = grid[0].size();

        vector<int> row(m), col(n);

        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j){
                if(grid[i][j]) row[i]++, col[j]++;
            }
        }

        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j){
                if(grid[i][j] && (row[i] > 1 || col[j] > 1))++cnt;
            }
        }
        return cnt;
    }
};