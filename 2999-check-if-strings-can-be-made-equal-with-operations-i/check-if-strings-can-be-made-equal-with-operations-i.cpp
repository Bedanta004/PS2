class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        bool b1 = false, b2 = false, b3 = false, b4 = false;
        if((s1[0] == s2[0]) && (s1[2] == s2[2])) b1 = true;
        if((s1[2] == s2[0]) && (s1[0] == s2[2])) b2 = true;
        if((s1[1] == s2[1]) && (s1[3] == s2[3])) b3 = true;
        if((s1[3] == s2[1]) && (s1[1] == s2[3])) b4 = true;

        if((b1 || b2) && (b3 || b4)) return true;
        return false;
    }
};