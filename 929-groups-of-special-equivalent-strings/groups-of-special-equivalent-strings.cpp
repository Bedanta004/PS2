class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        set<vector<pair<string, string>>> st;
        
        for(auto & s : words){
            string odd = "", even = "";
            for(int i=0; i<s.size(); i++){
                if(i%2 == 0) even += s[i];
                else odd += s[i];
            }
            sort(odd.begin(), odd.end());
            sort(even.begin(), even.end());
            st.insert({{odd, even}});
        }
        
        return st.size();
    }
};