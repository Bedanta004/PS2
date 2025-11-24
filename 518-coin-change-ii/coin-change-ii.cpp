class Solution {
public:
int solve(vector<int> &coins, int amount, int index){
    int n = coins.size();
    if(amount < 0) return 0;
    if(amount == 0) return 1;
    int ans = 0;

    for(int i=index; i<n; ++i){
        ans = ans + solve(coins, amount-coins[i], i);
    }
    return ans;
}
int solveMemo(vector<int> &coins, int amount, int index, vector<vector<int>>& dp){
    int n = coins.size();
    if(amount < 0) return 0;
    if(amount == 0) return 1;
    int ans = 0;

    if(dp[index][amount] != -1) return dp[index][amount];

    for(int i=index; i<n; ++i){
        ans = ans + solveMemo(coins, amount-coins[i], i, dp);
    }
    return dp[index][amount] = ans;
}
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size()+1, vector<int>(amount+1, -1));
      return solveMemo(coins, amount, 0, dp);  
    }
};