class Solution {
public:
    int appendCharacters(string s, string t) {
        int  j =0;

        for(char ch : s){
            if(ch == t[j]) j++;
        }
        return t.size()-j;
    }
};