class Solution {
public:
    long long removeZeros(long long n) {
        long long ans = 0;
        while(n > 0){
            if(n%10 != 0) ans = ans*10 + n%10;
            n /= 10;
        }
        string s = to_string(ans);
        reverse(s.begin(), s.end());
        long long res = stoll(s);
        return res;
    }
};