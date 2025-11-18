class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st, st1;
        int i = 0;

        while (i < s.size() || i < t.size()) {
            if (i < s.size()) {
                if (s[i] == '#') {
                    if (!st.empty()) st.pop();
                } else {
                    st.push(s[i]);
                }
            }
            if (i < t.size()) {
                if (t[i] == '#') {
                    if (!st1.empty()) st1.pop();
                } else {
                    st1.push(t[i]);
                }
            }
            i++;
        }
        string str1 = "", str2 = "";
        while (!st.empty()) {
            str1 += st.top();
            st.pop();
        }
        while (!st1.empty()) {
            str2 += st1.top();
            st1.pop();
        }
        return str1 == str2;
    }
};
