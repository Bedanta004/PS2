class Solution {
public:
    bool isSubstringPresent(string s) {
        unordered_set<string> st;
        string str = "";

        for(int i=1; i<s.size(); ++i){
            str += s[i-1]; str += + s[i];
            st.insert(str);
            str = "";
        }
        str = "";
        for(auto i : st) cout<<i<<" ";

        for(int i=s.size()-1; i>=1; --i){
            str += s[i]; str += s[i-1];
            if(st.count(str)) return true;
            str = "";
        }
        return false;
    }
};