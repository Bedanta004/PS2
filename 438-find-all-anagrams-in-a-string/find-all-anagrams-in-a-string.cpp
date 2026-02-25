class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int m = s.size(), n = p.size();
        if(m < n) return ans;

        vector<int> vs(26, 0), vp(26, 0);
        for(char &ch : p) vp[ch-'a']++;

        for(int i=0; i<n; ++i){
            vs[s[i] - 'a']++;
        }

        if(vs == vp) ans.push_back(0);
        for(int i=n; i<m; ++i){
            vs[s[i-n]-'a']--;
            vs[s[i] - 'a']++;
            if(vs==vp) ans.push_back(i-n+1);
        }
        return ans;
    }
};