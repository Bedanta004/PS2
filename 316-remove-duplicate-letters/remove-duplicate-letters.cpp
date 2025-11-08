class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int> lastOcc;

        for(int i=0; i<s.size(); i++) lastOcc[s[i]] = i;

        unordered_set<char> visited;
        stack<char> st;

        for(int i=0; i<s.size(); i++){
            if(visited.find(s[i]) != visited.end()) continue;

            while(!st.empty() && s[i] < st.top() && i < lastOcc[st.top()]){
                visited.erase(st.top());
                st.pop();
            }
            st.push(s[i]);
            visited.insert(s[i]);
        }
        string res;
        while(!st.empty()){
            res = st.top() + res;
            st.pop();
        }
        return res;
    }
};