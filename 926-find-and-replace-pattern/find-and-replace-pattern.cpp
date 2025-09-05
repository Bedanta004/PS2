class Solution {
public:
string check(string &str){
    unordered_map<char,int> mp;
    string s;
    char c = 'a';

    for(char ch : str){
        if(!mp.count(ch)){
           s += c;
           mp[ch]= c;
            c++;
        }
        else{
            s += mp[ch];
        }
    }
    return s;
}
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        string str1 = check(pattern);

        for(int i=0; i<words.size(); i++){
            string st = words[i];
            if(check(st) == str1) ans.push_back(st);
        }
        return ans;
    }
};