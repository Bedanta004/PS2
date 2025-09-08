class Solution {
public:
string check1(string str1){
    char ch = 'a';
    unordered_map<string,char> mp;
    int n = str1.size()-1;

    string st = "", s1 = "";
    for(int i=0; i<str1.size(); i++){
        if(isalpha(str1[i])) st += str1[i];
        if((str1[i] == ' ' || i==n) ){
            if(!mp.count(st)){
                mp[st] = ch;
                s1 += ch;
                ch++;
                st = "";
            }
            else{
                s1 += mp[st];
            }
            st = "";
        }
    }
    
    return s1;
}
string check2(string str2){
    string s2 = "";
    char c = 'a';
    unordered_map<char,char> mp;

    for(char ch : str2){
        if(!mp.count(ch)){
            mp[ch] = c;
            s2 += c;
            c++;
        }
        else{
            s2 += mp[ch];
        }
    }
    return s2;
}
    bool wordPattern(string pattern, string s) {
        string strr1 = check2(pattern);
        cout<<strr1<<" ";
        string strr2 = check1(s);
        cout<<strr2<<" ";

        return strr1 == strr2;
    }
};