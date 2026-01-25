class Solution {
public:
    int maxScore(string s) {
        int res = 0, oneC = 0;
        for(char ch : s){
            if(ch == '1') oneC++;
        }

        int zero = 0, one = 0;
        for(int i = 0; i < s.size() - 1; i++){  
            if(s[i] == '0') zero++;
            else one++;
            res = max(res, zero + (oneC - one));
        }
        return res;
    }
};
