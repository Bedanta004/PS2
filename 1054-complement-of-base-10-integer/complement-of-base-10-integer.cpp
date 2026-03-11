class Solution {
public:
    int bitwiseComplement(int n) {
        string s = "";
        if(n == 0) return 1;

        while(n){
            char num = n%2 + '0';
            s += num;
            n /= 2;
        }

        for(char &ch : s){
            if(ch == '0') ch = '1';
            else ch = '0';
        }
        int k = s.size()-1, sum = 0;
        for(int i=s.size()-1; i>=0; --i){
            sum += (s[i]-'0')*pow(2, k);
            --k;
        }
        return sum;
    }
};