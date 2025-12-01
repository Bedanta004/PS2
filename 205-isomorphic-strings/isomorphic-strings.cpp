class Solution {
public:
string solve(string str){
    char c = 'a';
    string ans = "";
    unordered_map<char, char> mp;

    for(char ch : str){
        if(!mp.count(ch)){
            ans += c;
            mp[ch] = c;
            c++;
        }
        else{
            ans += mp[ch];
        }
    }
    return ans;
}
    bool isIsomorphic(string s, string t) {
        return solve(s) == solve(t);
    }
};