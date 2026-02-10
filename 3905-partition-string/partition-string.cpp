class Solution {
public:
    vector<string> partitionString(string s) {
        vector<string> res;
        unordered_set<string> st;
        string str = "";

        for(char ch : s){
            if(!str.empty() && !st.count(str)){
                st.insert(str);
                res.push_back(str);
                str = "";
            }
            str += ch;
        }
        if(!str.empty() && !st.count(str)) res.push_back(str);
        return res;
    }
};