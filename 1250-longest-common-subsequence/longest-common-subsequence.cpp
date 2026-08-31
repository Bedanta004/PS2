class Solution {
public:
int solveUsingTabulation(string a, string b){
    vector<vector<int>> dp(a.length()+1, vector<int>(b.length()+1, 0));

    for(int i_ind = a.length()-1; i_ind >= 0; i_ind--){
        for(int j_ind = b.length()-1; j_ind>=0; j_ind--){
            int ans = 0;
            if(a[i_ind] == b[j_ind]){
                ans = 1 + dp[i_ind+1][j_ind+1];
            }
            else{
                ans = 0 + max(dp[i_ind][j_ind+1], dp[i_ind+1][j_ind]);
            }
            dp[i_ind][j_ind] = ans;
        }
    }
    return dp[0][0];
}

int solveUsingRec(string a, string b, int i, int j){
    if(i >= a.length() || j >= b.length()) return 0;

    int ans = 0;
    if(a[i] == b[j]){
        ans = 1 + solveUsingRec(a, b, i+1, j+1);
    }
    else{
        ans = 0 + max(solveUsingRec(a, b, i, j+1), solveUsingRec(a, b, i+1, j));
    }
    return ans;
}

int solveUsingMemo(string &a, string &b, int i, int j, vector<vector<int>> &dp){
    if(i >= a.length() || j >= b.length()) return 0;
    
    //check if answer already exists
    if(dp[i][j] != -1) return dp[i][j];

    int ans = 0;
    if(a[i] == b[j]){
        ans = 1 + solveUsingMemo(a, b, i+1, j+1, dp);
    }
    else{
        ans = 0 + max(solveUsingMemo(a, b, i, j+1, dp), solveUsingMemo(a, b, i+1, j, dp));
    }
    dp[i][j] = ans;
    return ans;
}

int solveUsingSpaceOpt(string a, string b){
    //vector<vector<int>> dp(a.length()+1, vector<int>(b.length()+1, 0));
    vector<int> curr(a.length()+1, 0);
    vector<int> next(a.length()+1, 0);

for(int j_ind = b.length()-1; j_ind>=0; j_ind--){
    for(int i_ind = a.length()-1; i_ind >= 0; i_ind--){
            int ans = 0;
            if(a[i_ind] == b[j_ind]){
                ans = 1 + next[i_ind+1];
            }
            else{
                ans = 0 + max(next[i_ind], curr[i_ind+1]);
            }
            curr[i_ind] = ans;
        }
        next = curr;
    }
    return next[0];
}
    int longestCommonSubsequence(string text1, string text2) {
        int i = 0;
        int j = 0;
        vector<vector<int>> dp(text1.length(),vector<int>(text2.length()+1, -1));
        //int ans = solveUsingRec(text1, text2, i, j);
        int ans = solveUsingSpaceOpt(text1, text2);
        //int ans = solveUsingMemo(text1,text2,i,j, dp);
        return ans;
    }
};