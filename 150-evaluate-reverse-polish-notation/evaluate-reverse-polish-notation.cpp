class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(string &ch : tokens){
            if(ch == "+"){
                int first = st.top(); st.pop();
                int sec = st.top(); st.pop();
                st.push(first+sec);
            }
            else if(ch == "-"){
                int first = st.top(); st.pop();
                int sec = st.top(); st.pop();
                st.push(sec - first);
            }
            else if(ch == "*"){
                int first = st.top(); st.pop();
                int sec = st.top(); st.pop();
                st.push(first*sec);
            }
            else if(ch == "/"){
                int first = st.top(); st.pop();
                int sec = st.top(); st.pop();
                st.push(sec / first);
            }
            else{
                st.push(stoll(ch));
            }
        }
        return st.top();
    }
};