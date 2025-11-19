class Solution {
public:
    string reversePrefix(string word, char ch) {
        bool vis = false;
        string ans = "";

        for(char &c : word){
            if(c == ch && !vis){
                vis = true;
                ans += c;
                reverse(ans.begin(), ans.end());
            }
            else ans += c;
        }
        return ans;
    }
};