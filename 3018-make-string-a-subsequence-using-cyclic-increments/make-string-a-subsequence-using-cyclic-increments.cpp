class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int j = 0;

        for(int i=0; i<str1.size(); ++i){
            char ch = str1[i]+1;
            if(str1[i] == 'z') ch = 'a';
            if(str1[i] == str2[j] || (ch == str2[j])) ++j;
            if(j >= str2.size()) return true;
        }
        return false;
    }
};