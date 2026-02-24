class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string sn = s+s;
        sn.erase(0,1);
        sn.erase(sn.size()-1, 1);
        if(sn.find(s) != string::npos) return true;
        return false;
    }
};