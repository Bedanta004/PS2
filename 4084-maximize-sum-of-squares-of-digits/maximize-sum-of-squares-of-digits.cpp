class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > 9*num) return "";
        string res = "";

        for(int i=0; i<num; i++){
            int digit = min(sum, 9);
            res += to_string(digit);
            sum -= digit;
        }

        if(sum != 0) return "";
        return res;
    }
};