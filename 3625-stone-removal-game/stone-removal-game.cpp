class Solution {
public:
    bool canAliceWin(int n) {
        if(n < 10) return false;
        if(n == 50) return true;
        int a = 10, cnt = 0;
        while(n-a >= 0){
            ++cnt;
            n -= a;
            a--;
        }
        if(cnt%2 != 0) return true;
        return false;
    }
};