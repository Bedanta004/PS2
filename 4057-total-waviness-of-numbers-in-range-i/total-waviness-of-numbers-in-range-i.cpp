class Solution {
public:
    int totalWaviness(int num1, int num2) {
        long long ans = 0;
        for(int i=num1; i<=num2; ++i){
            string s = to_string(i);
            int n = s.size();
            if(n < 3) continue;

            for(int j=1; j < n-1; ++j){
                int q = s[j-1] - '0', w = s[j]-'0', e = s[j+1]-'0';
                if(w > q && w > e) ans++;
                else if(w<q && w < e) ans++;
            }
        }
        return ans;
    }
};