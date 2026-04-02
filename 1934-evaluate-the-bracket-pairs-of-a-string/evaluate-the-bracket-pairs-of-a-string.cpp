class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;

        for(int i=0; i<knowledge.size(); ++i){
            mp[knowledge[i][0]] = knowledge[i][1];
        }

        string ans = "", t = "";
        bool b = false;

        for(char ch : s){
            if(isalpha(ch) && !b) ans += ch;
            if(ch == '('){
                b = true; continue;
            }
            if(b && isalpha(ch)){
                t += ch;
            }
            if(ch == ')'){
                b = false;
                if(mp.count(t)) ans += mp[t];
                else ans += '?';
                t = "";
            }
        }
        return ans;
    }
};