class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int mx = maxCost, l = 0, ans = 0, total = 0;

        for(int i=0; i<s.size(); ++i){
            if(s[i] != t[i]){
                total += abs(s[i]-t[i]);
            }
            while(total > mx){
                total -= abs(s[l]-t[l]);
                ++l;
            }
            if(mx >= total) ans = max(ans, i-l+1);
        }
        return ans;
    }
};