class Solution {
public:
    string findValidPair(string s) {
        unordered_map<char,int> freq;

        for(char c : s){
            freq[c-'0']++;
        }
        string st ="";
        for(int i=1; i<s.size(); i++){
            if(freq[s[i]-'0'] == s[i]-'0' && freq[s[i-1]-'0'] == s[i-1]-'0' && s[i]-'0' != s[i-1]-'0'){
                st += s[i-1];
                st += s[i];
                break;
            }
        }
        return st;
    }
};