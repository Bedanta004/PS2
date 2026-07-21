class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        
        for(char &ch : t) mp[ch]++;
        int cnt = mp.size(), low = 0, ans = INT_MAX, ind = 0;
        
        for(int i=0; i<s.size(); ++i){
            mp[s[i]]--;
            if(mp[s[i]] == 0) cnt--;
            
            while(low < i && mp[s[low]] < 0){
                mp[s[low]]++;
                low++;
            }
            if(ans > i-low+1 && cnt == 0){
                ind = low;
                ans = i-low+1;
            }
        }
        if(ans == INT_MAX) return "";
        return s.substr(ind, ans);
    }
};