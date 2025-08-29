class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<char,int> mp,mp1;

        for(int i=0; i<s.size(); i++){
            mp[s[i]] = i;
            if(!mp1.count(s[i])) mp1[s[i]] = i;
        }
        int j = 0;

        for(char ch = 'a'; ch <= 'z'; ch++){
            if(!mp.count(ch)) {
             j++;
             continue;
            }
            if(mp.count(ch) && mp[ch] - mp1[ch] -1 != distance[j]) return false;
            j++;
        }
        return true;
    }
};