class Solution {
public:
    bool validDigit(int n, int x) {
        bool b = false;
        int num = -1;
        while(n){
            if(n%10 == x){
                b = true;
            }
            num = n%10;
            n /= 10;
        }
        return b && num != x;
    }
};