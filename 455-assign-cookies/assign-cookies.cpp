class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int maxi = min(g.size(), s.size());
        if(maxi == 0) return 0;
        sort(begin(g), end(g));
        sort(begin(s), end(s));
        int cnt = 0;

        int j=0, n = g.size();
        for(int i=0; i<s.size(); i++){
            if(j == n) break;
            if(s[i] >= g[j]){
                cnt++;
                j++;
            }
        }
        return cnt;
    }
};