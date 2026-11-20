class Solution {
public:
double dfs(string &src, string &t, unordered_map<string, vector<pair<string, double>>> &adj, unordered_set<string> &vis){
    if(!adj.count(src) || !adj.count(t)) return -1.0;
    if(src == t) return 1.0;
    vis.insert(src);

    for(auto &[nei, wt] : adj[src]){
        if(!vis.count(nei)){
            double res = dfs(nei, t, adj, vis);
            if(res != -1.0) return wt*res;
        }
    }
    return -1.0;
}
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string, vector<pair<string, double>>> adj;

        for(int i=0; i<equations.size(); ++i){
            string a = equations[i][0], b = equations[i][1];
            adj[a].emplace_back(b, values[i]);
            adj[b].emplace_back(a, 1.0/values[i]);
        }
        vector<double> res;

        for(auto &i : queries){
            string s = i[0], t = i[1];
            unordered_set<string> vis;
            res.push_back(dfs(s, t, adj, vis));
        }
        return res;
    }
};