class Solution {
public:
    string finalString(string s) {
        string str = "";
        int n = str.size();

        for(int i=0; i<s.size(); i++){
            if(s[i] != 'i'){
                str += s[i];
            }
            if(s[i] == 'i'){
                reverse(str.begin(),str.end());
            }
        }
        return str;
    }
};