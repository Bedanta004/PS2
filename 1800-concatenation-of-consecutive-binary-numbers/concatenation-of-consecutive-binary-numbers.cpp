class Solution {
public:
string solve(int num){
    string str = "";
    while(num){
        str += num%2 + '0';
        num /= 2;
    }
    reverse(begin(str), end(str));
    return str;
}
    int concatenatedBinary(int n) {
        const int MOD = 1e9+7;
        string s = "";

        for(int i=1; i<=n; ++i){
            s += solve(i);
        }
        long long ans = 0;
        for(char ch : s){
            ans = ( (ans * 2) % MOD + (ch - '0') ) % MOD;
        }
        return ans;
    }
};