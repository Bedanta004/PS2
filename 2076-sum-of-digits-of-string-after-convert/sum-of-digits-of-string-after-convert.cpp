class Solution {
public:
int solve(string str){
    int ans = 0;
    for(char ch : str){
        ans += ch - '0';
    }
    return ans;
}
    int getLucky(string s, int k) {
        string num;

        for(char ch : s){
            num += to_string(ch-'a'+1);
        }
        cout<<num<<"  ";
        int res = 0;

        while(k > 0){
           res = solve(num);
           cout<<res<<" ";
           num = to_string(res);
           k--;
        }
        return res;
    }
};