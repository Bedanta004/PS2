class Solution {
public:
    string makeGood(string s) {
        stack<char> st;

        for(char ch: s){
            bool b = true;
            if(!st.empty() && (tolower(st.top()) == ch || toupper(st.top()) == ch) && st.top() != ch){
                st.pop();
                b = false;
            }
            if(b) st.push(ch);
        }
        string ans = "";
        while(!st.empty()){
            ans = st.top()+ans;
            st.pop();
        }
        return ans;
    }
};