class Solution {
public:
bool isMatch(string &s, string &p, int si, int pi){
    if(si == s.size() && pi == p.size()) return true;
    if(si == s.size() && pi < p.size()){
        while(pi < p.size()){
            if(p[pi] != '*') return false;
            pi++;
        }
        return true;
    }
    //single char matching
    if(s[si] == p[pi] || p[pi] == '?'){
        return isMatch(s, p, si+1, pi+1);
    }
    if(p[pi] == '*'){
        //treat '*' as empty or null
        bool case1 = isMatch(s, p, si, pi+1);

        // let '*' consume one character
        bool case2 = isMatch(s, p, si+1, pi);
        return case1 || case2;
    }
    return false;
}
bool isMatchMemo(string &s, string &p, int si, int pi, vector<vector<int>> &dp){
    if(si == s.size() && pi == p.size()) return true;
    if(si == s.size() && pi < p.size()){
        while(pi < p.size()){
            if(p[pi] != '*') return false;
            pi++;
        }
        return true;
    }

    if(dp[si][pi] != -1) return dp[si][pi];
    //single char matching
    if(s[si] == p[pi] || p[pi] == '?'){
        return isMatchMemo(s, p, si+1, pi+1, dp);
    }
    if(p[pi] == '*'){
        //treat '*' as empty or null
        bool case1 = isMatchMemo(s, p, si, pi+1, dp);

        // let '*' consume one character
        bool case2 = isMatchMemo(s, p, si+1, pi, dp);
        return dp[si][pi] = case1 || case2;
    }
    return dp[si][pi]= false;
}
    bool isMatch(string s, string p) {
        vector<vector<int>> dp(s.size()+1, vector<int>(p.size()+1, -1));
        int si = 0;
        int pi = 0;

        return isMatchMemo(s, p, si, pi, dp);
    }
};