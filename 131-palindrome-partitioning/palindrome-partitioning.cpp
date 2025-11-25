class Solution {
public:
bool palindrome(string &s, int l, int r){
    while(l < r) if(s[l++] != s[r--]) return false;
    return true;
}
void solve(string &s, int st, vector<string> &v, vector<vector<string>> &ans){
    if(st >= s.size()){
        ans.push_back(v);
    }
    for(int i=st; i<s.size(); ++i){
        if(palindrome(s, st, i)){
            v.push_back(s.substr(st, i-st+1));
            solve(s, i+1, v, ans);
            v.pop_back();
        }
    }
}

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> v;
        solve(s,  0, v, ans);
        return ans;
    }
};