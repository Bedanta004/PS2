class Solution {
public:
    string maximumXor(string s, string t) {
        unordered_map<char, int> fr;

        for(char ch : t) fr[ch]++;
        string ans = "";

        for(char ch : s){
            if(ch == '1' && fr.count('0')){
                ans += '1';
                fr['0']--;
                if(fr['0'] == 0) fr.erase('0');
            }
            else if(ch == '0' && fr.count('1')){
                ans += '1';
                fr['1']--;
                if(fr['1'] == 0) fr.erase('1');
            }
            else ans += '0';
        }
        return ans;
    }
};