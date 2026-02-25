class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> vs1(26, 0), vs2(26, 0);
        int m = s1.size(), n = s2.size();
        if(n < m) return false;

        for(char &ch : s1) vs1[ch - 'a']++;

        for(int i=0; i<m; ++i) vs2[s2[i] - 'a']++;
        if(vs1 == vs2) return true;

        for(int i=m; i<n; ++i){
            vs2[s2[i-m]-'a']--;
            vs2[s2[i] - 'a']++;
            if(vs2 == vs1) return true;
        }
        return false;
    }
};