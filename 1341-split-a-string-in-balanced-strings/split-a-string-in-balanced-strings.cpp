class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt = 0;
        int R = 0, L = 0;
        if(s[0] == 'R') R++;
        else L++;

        for(int i=1; i<s.size(); ++i){
            char ch = s[i];
            if(ch == 'R') R++;
            if(ch == 'L') L++;
            if(R == L){
                cnt++;
                R = 0; L = 0;
            }
        }
        return cnt;
    }
};