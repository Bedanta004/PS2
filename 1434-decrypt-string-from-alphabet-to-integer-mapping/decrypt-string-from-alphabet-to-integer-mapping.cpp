class Solution {
public:
    string freqAlphabets(string s) {
        unordered_map<string, char> mp;
        int i = 1;

        for(char ch = 'a'; ch <= 'z'; ++ch){
            string str = ""; str += ch;
            if(ch < 'j') mp[to_string(i)] = ch;
            else{
                mp[to_string(i) + "#"] = ch;
            }
            i++;
        }

        string res = "", r = "";
        bool b = true;
        for(int i=0; i<s.size(); ++i){
            if(i+2 < s.size() && s[i+2] == '#' && b){
                r += s[i];
                r += s[i+1];
                r += '#';
                b = false;
            }
            else if(s[i] == '#'){
                res += mp[r];
                r = "";
                b = true;
            }
            else if(b){
                string ns = ""; ns += s[i];
                res += mp[ns];
            }
        }
        return res;
    }
};