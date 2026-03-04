class Solution {
public:
    int longestContinuousSubstring(string s) {
        int len = 1, ans = 1;

        for(int i=1; i<s.size(); ++i){
            if(s[i] == s[i-1] + 1){
                len++;
                ans = max(len, ans);
            }
            else len = 1;
        }
        return ans;
    }
};