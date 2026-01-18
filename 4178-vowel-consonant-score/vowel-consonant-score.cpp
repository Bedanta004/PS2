class Solution {
public:
    int vowelConsonantScore(string s) {
        int cnt1 = 0, cnt2 = 0;

        for(char ch : s){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') cnt1++;
            else if(isalpha(ch)) cnt2++;
        }
        return (cnt2 == 0) ? 0 : cnt1/cnt2;
    }
};