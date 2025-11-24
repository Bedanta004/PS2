class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set<string> st;
        string s = "";

        int i = 0;
        while(i < word.size()){
            if(isdigit(word[i])) s += word[i];
            else{
                if(!s.empty()){
                    int pos = 0;
                    while(pos < s.size() && s[pos] == '0') pos++;
                    st.insert(s.substr(pos));
                    s = "";
                }
            }
            i++;
        }
        if(!s.empty()){
            int pos = 0;
            while(pos < s.size() && s[pos] == '0') pos++;
            st.insert(s.substr(pos));
        }
        return st.size();
    }
};