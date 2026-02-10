class Solution {
public:
    string compressedString(string word) {
        string ans = "";
        char s = word[0];
        int cnt = 1;

        for(int i=1; i<word.size(); ++i){
            if(word[i] == s && cnt < 9) cnt++;
            else{
                ans += cnt + '0';
                ans += s;
                s = word[i];
                cnt = 1;
            }
        }
        ans += cnt + '0';
        ans += s;
        return ans;
    }
};