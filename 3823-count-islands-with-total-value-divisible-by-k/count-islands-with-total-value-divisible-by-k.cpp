class Solution {
public:
int rows,cols;
long long dfs(vector<vector<int>> &grid, int r, int c){
    if(r<0 || c<0 || r>=rows || c>=cols || grid[r][c] == 0) return 0;
    long long sum = grid[r][c];

    grid[r][c] = 0;
    sum += dfs(grid, r+1, c);
    sum += dfs(grid, r-1, c);
    sum += dfs(grid, r, c+1);
    sum += dfs(grid, r, c-1);

    return sum;
}
    int countIslands(vector<vector<int>>& grid, int k) {
        rows = grid.size();
        cols = grid[0].size();
        int ans = 0;

        for(int r=0; r<rows; ++r){
            for(int c=0; c<cols; ++c){
                if(grid[r][c] > 0){
                    long long total = dfs(grid, r, c);
                    if(total % k == 0) ++ans;
                }
            }
        }
        return ans;
    }
};