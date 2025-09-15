class Solution {
public:
int solveUsingRec(int start, int end){
    if(start > end){
        //Range se bahar
        //zero panalty
        return 0;
    }
    if(start == end){
        //sirf ek hi number hai
        //it means zero panalty
        return 0;
    }
    int ans = INT_MAX;
    for(int i=start; i<=end; i++){
        ans = min(ans, i + max(solveUsingRec(start, i-1), solveUsingRec(i+1, end)));  
    }
    return ans;
}

int solveUsingMemo(int start, int end, vector<vector<int>> &dp){
    if(start > end){
        //Range se bahar
        //zero panalty
        return 0;
    }
    if(start == end){
        //sirf ek hi number hai
        //it means zero panalty
        return 0;
    }

    if(dp[start][end] != -1) return dp[start][end];

    int ans = INT_MAX;
    for(int i=start; i<=end; i++){
        ans = min(ans, i + max(solveUsingMemo(start, i-1, dp), solveUsingMemo(i+1, end, dp)));  
    }
    dp[0][0] = ans;
    return ans;
}

int solveUsingTabulation(int n){
    vector<vector<int>> dp(n+2, vector<int>(n+1, 0));

    for(int start_ind =n; start_ind >= 1; start_ind--){
        for(int end_ind = 1; end_ind <= n; end_ind++){

            if(start_ind >= end_ind){
                //invalid range
                continue;
            }
            int ans = INT_MAX;
            for(int i=start_ind; i<=end_ind; i++){
            ans = min(ans, i + max(dp[start_ind][i-1], dp[i+1][end_ind]));  
        }
          dp[start_ind][end_ind] = ans;
        }
    }
    return dp[1][n];
}
    int getMoneyAmount(int n) {
      int start = 1;
      int end = n; 
      vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
      //int ans = solveUsingMemo(start, end, dp);
      int ans = solveUsingTabulation(n);
      return ans;
    }
};