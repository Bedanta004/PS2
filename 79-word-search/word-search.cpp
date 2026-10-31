class Solution {
public:
int rows, cols;
string w;
bool dfs(int r, int c, vector<vector<char>> &board, int i){
    if(i == w.size()) return true;
    if(r<0 || c<0 || r>=rows || c>=cols || board[r][c] != w[i]) return false;

    char temp = board[r][c];
    board[r][c] = '*';

    bool b = dfs(r+1, c, board, i+1) ||
    dfs(r-1, c, board, i+1) ||
    dfs(r, c+1, board, i+1) ||
    dfs(r, c-1, board, i+1);

    board[r][c] = temp;
    return b;
}
    bool exist(vector<vector<char>>& board, string word) {
        w = word;
        rows = board.size();
        cols = board[0].size();

        for(int r=0; r<rows; ++r){
            for(int c=0; c<cols; ++c){
                if(dfs(r, c, board, 0)) return true;
            }
        }
        return false;
    }
};