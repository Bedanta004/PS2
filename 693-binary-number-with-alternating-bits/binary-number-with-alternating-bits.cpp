class Solution {
public:
    bool hasAlternatingBits(int n) {
        char ch = 'a';

        while(n){
            int num = n%2;
            if(ch == num + '0') return false;
            ch = num + '0';
            cout<< ch;
            n /= 2;
        }
        return true;
    }
};