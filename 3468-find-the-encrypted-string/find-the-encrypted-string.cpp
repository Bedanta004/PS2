class Solution {
public:
    string getEncryptedString(string s, int k) {
        string res = s;
        for(int i=0; i<s.size(); ++i){
            res[i] = s[(k+i)%s.size()];
        }
        return res;
    }
};