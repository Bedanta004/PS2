class Solution {
public:
bool atl, pas;
int rows, cols;
vector<vector<int>> dir = {{1,0}, {0,1}, {0,-1}, {-1,0}};
void dfs(int r, int c, vector<vector<int>>& heights, int prev){
    if(r<0 || c<0){
        pas = true;
        return;
    }
    if(r>=rows || c>=cols){
        atl = true;
        return;
    }
    if(heights[r][c] > prev) return;

    int tmp = heights[r][c];
    heights[r][c] = INT_MAX;
    for(auto &i : dir){
        dfs(r+i[0], c+i[1], heights, tmp);
        if(atl && pas) break;
    }
    heights[r][c] = tmp;
}
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>> res;
        rows = heights.size();
        cols = heights[0].size();

        for(int r=0; r<rows; ++r){
            for(int c=0; c<cols; ++c){
                atl = false;
                pas = false;
                dfs(r, c, heights, INT_MAX);
                if(atl && pas) res.push_back({r, c});
            }
        }
        return res;
    }
};