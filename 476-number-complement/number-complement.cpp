class Solution {
public:
    int findComplement(int num) {
        string s = "";
        // if(n == 0) return 1;

        while(num){
            char num1 = num%2 + '0';
            s += num1;
            num /= 2;
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