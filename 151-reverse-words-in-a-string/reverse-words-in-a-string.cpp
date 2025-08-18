class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = n - 1;

        while (i >= 0 && s[i] == ' ') i--;  
        string ans = "";
        string str = "";

        for (; i >= 0; i--) {
            if (isalpha(s[i]) || isdigit(s[i])) str += s[i]; 
            else if (s[i] == ' ') {
                if (!str.empty()) {
                    reverse(str.begin(), str.end());
                    ans += str + ' ';
                    str = "";
                }
            }
        }

        if (!str.empty()) {  // fix: handle first word
            reverse(str.begin(), str.end());
            ans += str;
        } else if (!ans.empty() && ans.back() == ' ') {
            ans.pop_back();  // fix: remove trailing space
        }

        return ans;

    }
};