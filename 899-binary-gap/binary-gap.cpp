class Solution {
public:
    int binaryGap(int n) {
        string s;

        while(n){
            s += n%2 + '0';
            n /= 2;
        }
        reverse(begin(s), end(s));
        int mini = INT_MAX, ans = INT_MIN;
        bool b = false;

        for(int i=0; i<s.size(); ++i){
            if(!b && s[i] == '1'){
                b = true;
                mini = i;
            }
            if(b && s[i] == '1'){
                ans = max(ans, i-mini);
                mini = i;
            }
        }
        return ans == INT_MIN ? 0 : ans;
    }
};