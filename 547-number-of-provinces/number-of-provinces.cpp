class Solution {
public:
void dfs(int src, unordered_map<int, bool> &vis, int n, vector<vector<int>> &isConnected){
    vis[src] = true;

    //node ke nbr, node row ke har col me milega
    int col = n;
    int row = src;

    for(int nbrIndex=0; nbrIndex < col; ++nbrIndex){
        int nbr = nbrIndex;
        if(src != nbr && isConnected[row][nbrIndex] == 1){
            if(!vis[nbr]){
                dfs(nbr, vis, n, isConnected);
            }
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int cnt = 0;
        unordered_map<int, bool> vis;

        for(int i=0; i<n; ++i){
            if(!vis[i]){
                dfs(i, vis, n, isConnected);
                cnt++;
            }
        }
        return cnt;
    }
};