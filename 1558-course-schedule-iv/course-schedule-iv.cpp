class Solution {
    vector<vector<int>> adj;
public:
bool dfs(int node, int target){
    if(node == target) return true;
    for(int i : adj[node]){
        if(dfs(i, target)) return true;
    }
    return false;
}
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        adj.assign(numCourses, vector<int>());
        for(auto &i : prerequisites){
            adj[i[0]].push_back(i[1]);
        }
        vector<bool> res;

        for(auto &i : queries){
            res.push_back(dfs(i[0], i[1]));
        }
        return res;
    }
};