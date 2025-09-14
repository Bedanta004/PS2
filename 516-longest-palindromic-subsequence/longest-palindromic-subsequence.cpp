class Solution {
public:
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
    int longestPalindromeSubseq(string s) {
        string a = s;
        reverse(a.begin(),a.end());
        int ans = solveUsingSpaceOpt(a,s);
        return ans;
    }
}; 