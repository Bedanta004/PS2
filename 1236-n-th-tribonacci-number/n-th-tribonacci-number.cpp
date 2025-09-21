class Solution {
public:
int solve(int n){
    if(n == 0 || n == 1) return n;
    if(n == 2) return 1;

    int nas = solve(n-1)+solve(n-2)+solve(n-3);
    return nas; 
}

int solveUsingMemo(int n, vector<int> &dp){
    if(n == 0 || n == 1) return n;
    if(n == 2) return 1;

    if(dp[n] != -1) return dp[n];

    dp[n] = solveUsingMemo(n-1, dp) + solveUsingMemo(n-2, dp) + solveUsingMemo(n-3, dp);
    return dp[n]; 
}

    int tribonacci(int n) {
        vector<int> dp(n+5, -1);
        int ans = solveUsingMemo(n, dp);
        return ans;
    }
};