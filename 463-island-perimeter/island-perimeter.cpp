class Solution {
public:
int solve(vector<vector<int>> &grid, int i, int j){
    int sides = 4;
    int n = grid.size(), m = grid[0].size();

    if(j > 0 && grid[i][j-1] == 1) --sides;   // left
    if(j < m-1 && grid[i][j+1] == 1) --sides; // right
    if(i > 0 && grid[i-1][j] == 1) --sides;   // up
    if(i < n-1 && grid[i+1][j] == 1) --sides; // down

    return sides;
}
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int ans  = 0;

        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
               if(grid[i][j] == 1) ans += solve(grid, i, j);
            }
        }
        return ans;
    }
};