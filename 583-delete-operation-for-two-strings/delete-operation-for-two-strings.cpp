class Solution {
public:
int solve(string &w1, string &w2, int s, int t){
    if(s >= w1.size() || t >= w2.size()) return 0;

    if(w1[s] == w2[t]) return 1 + solve(w1, w2, s+1, t+1);
    else return max(solve(w1, w2, s+1, t), solve(w1, w2, s, t+1));
}
int solveMemo(string &w1, string &w2, int s, int t, vector<vector<int>> &dp){
    if(s >= w1.size() || t >= w2.size()) return 0;

    if(dp[s][t] != -1) return dp[s][t];

    if(w1[s] == w2[t]) return dp[s][t] = 1 + solveMemo(w1, w2, s+1, t+1, dp);
    else return dp[s][t] = max(solveMemo(w1, w2, s+1, t, dp), solveMemo(w1, w2, s, t+1, dp));
}
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.size()+1, vector<int>(word2.size()+1, -1));
        int len = solveMemo(word1, word2, 0,0, dp);
        return (word1.size() - len) + (word2.size() - len);
    }
};