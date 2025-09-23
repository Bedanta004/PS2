class Solution {
public:
int climbMemo(int n, vector<int> &dp){
        if(n==0 || n==1) return 1;

        if(dp[n] != -1) return dp[n];

        dp[n] = climbMemo(n-1, dp)+climbMemo(n-2, dp);
        return dp[n];
    }
    int climbStairs(int n){
        vector<int> dp(n+1, -1);
        return climbMemo(n, dp);
    }
};