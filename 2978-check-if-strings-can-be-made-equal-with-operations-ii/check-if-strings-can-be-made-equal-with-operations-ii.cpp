class Solution {
public:
    bool checkStrings(string s1, string s2) {
        string s3 = "", s4 = "", s5 = "", s6 = "";

        for(int i=0; i<s1.size(); ++i){
            if(i%2 == 0){
                s3 += s1[i]; s4 += s2[i];
            }
            else{
                s5 += s1[i]; s6 += s2[i];
            }
        }

        sort(begin(s3), end(s3));
        sort(begin(s4), end(s4));
        sort(begin(s5), end(s5));
        sort(begin(s6), end(s6));

        return (s3 == s4 && s5 == s6);
    }
};