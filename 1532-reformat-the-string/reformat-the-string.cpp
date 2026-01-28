class Solution {
public:
    string reformat(string s) {
        int no = 0, c = 0;
        string s1 = "", s2 = "", s3 = "";

        for(auto ch : s){
            if(isdigit(ch)) {no++; s1 += ch; s3 += ch;}
            else {c++; s2 += ch; s3 += ch;}
        }
        if(abs(no-c) > 1) return "";
        if(s1.size() == s2.size()) return s3;
        if(s1.size() > s2.size()){
            string s4 = "";
            s4 += s1[0];
            for(int i=1; i<s1.size(); ++i){
                s4 += s2[i-1];
                s4 += s1[i];
            }
            return s4;
        }
        if(s2.size() > s1.size()){
            string s5 = ""; s5 += s2[0];
            for(int i=1; i<s2.size(); ++i){
                s5 += s1[i-1];
                s5 += s2[i];
            }
            return s5;
        }
        return "";
    }
};