class Solution {
public:
    bool checkString(string s) {
        int m = INT_MIN, n = INT_MAX;

        for(int i=0; i<s.size(); i++){
            if(s[i] == 'a'){
                m = max(m, i);
            }
            else if(s[i] == 'b'){
                n = min(n, i);
            }
        }
        if(m == INT_MIN || n == INT_MAX) return true;
        else if(n > m) return true;
        return false;
    }
};