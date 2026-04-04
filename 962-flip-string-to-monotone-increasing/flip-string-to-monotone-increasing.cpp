class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int one = 0, flip = 0;

        for(char ch : s){
            if(ch == '1')  ++one;
            else{
                ++flip;
                flip = min(flip, one);
            }
        }
        return flip;
    }
};