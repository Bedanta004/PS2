class Solution {
public:
int solve(string s, int i, unordered_map<int, int> &dp){
    // if(i == s.size()) return 1;
    if(dp.count(i)) return dp[i];
    if(s[i] == '0') return 0;

    int res = solve(s, i+1, dp);
    if(i+1 < s.size() && (s[i] == '1' || s[i] == '2' && s[i+1] < '7')) res += solve(s, i+2, dp);

    return dp[i] = res;
}
    int numDecodings(string s) {
        unordered_map<int, int> dp;
        dp[s.size()] = 1;
        return solve(s, 0, dp);
    }
};