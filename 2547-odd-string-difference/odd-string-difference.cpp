class Solution {
public:
    string oddString(vector<string>& words) {
        unordered_map<string, int> mp;

        for(auto &s : words){
            string str = "";
            for(int i=1; i<s.size(); ++i){
                int k = s[i] - s[i-1];
                str += to_string(k) + ',';
            }
            mp[str]++;
        }

        for(auto &s : words){
            string str = "";
            for(int i=1; i<s.size(); ++i){
                int k = s[i] - s[i-1];
                str += to_string(k) + ',';
            }
            if(mp[str] == 1) return s;
        }
        return "";
    }
};