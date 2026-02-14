class Solution {
public:
    string resultingString(string s) {
        stack<char> st;

        for(char ch : s){
            if (!st.empty() && (((st.top() - 'a' + 1) % 26 + 'a') == ch || ((ch - 'a' + 1) % 26 + 'a') == st.top())){
                st.pop();
            }
            else st.push(ch);
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(begin(ans), end(ans));
        return ans;
    }
};