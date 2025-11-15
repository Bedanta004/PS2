class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> st;
        stack<int> st1;
        string ans = s;

        for(int i=0; i<s.size(); ++i){
            if(s[i] == '(') {st.push(s[i]);st1.push(i);}
            else if(!st.empty() && st.top()=='(' && s[i] == ')'){ st.pop(); st1.pop();}
            else if(s[i] == ')' || s[i] == '('){ st.push(s[i]); st1.push(i);}
        }

        while(!st1.empty()){
            ans.erase(st1.top(), 1);
            st1.pop();
        }
        return ans;
    }
};