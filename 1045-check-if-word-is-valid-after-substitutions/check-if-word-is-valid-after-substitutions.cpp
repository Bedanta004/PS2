class Solution {
public:
    bool isValid(string s) {
        while(s.find("abc") != string::npos){
            int st = s.find("abc");
            s = s.erase(st,3);
        }
        return s.size() == 0 ? true : false;
    }
};