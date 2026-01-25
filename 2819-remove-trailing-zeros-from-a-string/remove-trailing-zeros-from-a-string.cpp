class Solution {
public:
    string removeTrailingZeros(string num) {
        string res = num;
        int i=0, j = num.size()-1;

        while(num[j] == '0' && j >= 0){
            res.erase(j);
            j--;
        }
        
        return res;
    }
};