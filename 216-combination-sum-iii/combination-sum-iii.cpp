class Solution {
public:
void solve(int k, int n, vector<int> &v, vector<vector<int>> &ans, int st){
    if(n == 0 && k == 0){
        ans.push_back(v);
        return;
    }
    if(k <= 0 || n <= 0) return;
    for(int i=st; i<=9; ++i){
        v.push_back(i);
        solve(k-1, n-i, v, ans, i+1);
        v.pop_back();
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v;
        vector<vector<int>> ans;
        solve(k, n, v, ans, 1);
        return ans;
    }
};