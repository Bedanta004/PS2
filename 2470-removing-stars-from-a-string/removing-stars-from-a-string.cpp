class Solution {
public:
    string removeStars(string s) {
        stack<char> st;

        for(char &ch : s){
            bool b = true;
            if(!st.empty() &&ch == '*'){
                b=false; st.pop();
            }
            if(b) st.push(ch);
        }
        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(begin(res), end(res));
        return res;
    }
};