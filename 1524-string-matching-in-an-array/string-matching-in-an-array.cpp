class Solution {
public:
bool match(string s,int n, vector<string>& words){
    for(int i=0; i<words.size(); i++){
        string str = words[i];
        if(i == n) continue;
        if(str.find(s) != string::npos) return true;
    }
    return false;
}
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        for(int i=0; i<words.size(); ++i){
            if(match(words[i], i, words)) ans.push_back(words[i]);
        }
        return ans;
    }
};