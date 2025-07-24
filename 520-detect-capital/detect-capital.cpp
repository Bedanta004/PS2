class Solution {
public:
    bool detectCapitalUse(string word) {
        

        int n= word.size();
        int c1=0,c2 =0;

        for(int i=0; i<word.size(); i++){
            if(word[i]>='A' && word[i]<='Z'){
                c1++;
            }
            if(word[i]>='a' && word[i]<='z'){
                c2++;
            }
        }
        if(word.size() == c1) return true;
        if(word.size() == c2) return true;
        if(word[0] >= 'A' && word[0] <='Z' && c1==1) return true;

        return false;
    }
};