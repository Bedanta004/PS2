class Solution {
public:
vector<pair<int, int>> directions = {{-1,0}, {1,0}, {0,-1}, {0,1}};
vector<vector<int>> dp;
int dfs(vector<vector<int>> &matrix, int r, int c, int prev){
    int rows = matrix.size(), cols = matrix[0].size();
    if(r<0 || r>=rows || c<0 || c>=cols || matrix[r][c] <= prev) return 0;

    if(dp[r][c] != -1) return dp[r][c];
    int res = 1;

    for(auto &i : directions){
        res = max(res, 1+dfs(matrix, r+i.first, c+i.second, matrix[r][c]));
    }
    return dp[r][c] = res;
}
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        dp = vector<vector<int>>(rows, vector<int>(cols, -1));
        int ans = 0;

        for(int r=0; r<rows; ++r){
            for(int c=0; c<cols; ++c){
                ans = max(ans, dfs(matrix, r, c, -1));
            }
        }
        return ans;
    }
};