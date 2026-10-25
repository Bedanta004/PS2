class Solution {
public:
int rows, cols;
vector<vector<int>> dir = {{0,1}, {1,0}, {0,-1}, {-1,0}};
bool dfs(vector<vector<int>> &grid, int r, int c){
    if(r<0 || c<0 || r>=rows || c>=cols) return false;
    if(grid[r][c] == 1 || vis[r][c]) return true;

    vis[r][c] = true;
    bool b = true;
    for(auto &i : dir){
        if(!dfs(grid, r+i[0], c+i[1])) b = false;
    }
    return b;
}
vector<vector<bool>> vis;
    int closedIsland(vector<vector<int>>& grid) {
        int res =0;
        rows = grid.size();
        cols = grid[0].size();
        vis.assign(rows, vector<bool>(cols, false));

        for(int r=0; r<rows; ++r){
            for(int c=0; c<cols; ++c){
                if(grid[r][c] == 0 && !vis[r][c]){
                    if(dfs(grid, r, c)) ++res;
                }
            }
        }
        return res;
    }
};