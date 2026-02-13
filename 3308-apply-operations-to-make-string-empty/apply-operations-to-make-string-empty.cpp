class Solution {
public:
    string lastNonEmptyString(string s) {
        unordered_map<char, int> freq, mp;

        for(int i=0; i<s.size(); ++i){
            freq[s[i]]++;
        }
        for(int i=0; i<s.size(); ++i){
            mp[s[i]] = i;
        }
        string ans = "";
        vector<pair<int, char>> v;

        for(auto &p : freq){
            v.push_back({p.second, p.first});
        }
        sort(rbegin(v), rend(v));
        int maxfreq = v[0].first;

        for(int i=0; i<s.size(); ++i){
            if(freq[s[i]] == maxfreq && mp[s[i]] == i) ans += s[i];
        }
        return ans;
    }
};