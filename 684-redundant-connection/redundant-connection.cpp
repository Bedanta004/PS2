class Solution {
public:
bool dfs(int node, int par, vector<bool> &vis, vector<vector<int>> &adj){
    if(vis[node]) return true;
    vis[node] = true;

    for(auto &i : adj[node]){
        if(i == par) continue;
        if(dfs(i, node, vis, adj)) return true;
    }
    return false;
}
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<vector<int>> adj(n+1);

        for(auto &i : edges){
            int u = i[0], v = i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
            vector<bool> vis(n+1, false);

            if(dfs(u, -1, vis, adj)){
                return {u,v};
            }
        }
        return {};
    }
};