class Solution {
public:
    string reverseByType(string s) {
        string a = "", sp = "";

        for(char ch : s){
            if(isalpha(ch)) a += ch;
            else sp += ch;
        }
        reverse(begin(a), end(a));
        reverse(begin(sp), end(sp));
        int i = 0, j =0;
        string ans = "";

        for(char ch : s){
            if(isalpha(ch)){
                ans += a[i]; ++i;
            }
            else{
                ans += sp[j]; ++j;
            }
        }
        return ans;
    }
};