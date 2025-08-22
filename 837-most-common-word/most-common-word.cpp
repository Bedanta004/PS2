class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int> freq,freq1;
        string str = "";

        for(int i=0; i<paragraph.size(); i++){
            if(isalpha(paragraph[i])){
                str += tolower(paragraph[i]);
            }
            if((!isalpha(paragraph[i]) || i == paragraph.size() - 1) && !str.empty()) {
                freq[str]++;
                str = "";
            }
        }
        vector<pair<int,string>> v;
        for(auto it : freq){
            v.push_back({it.second, it.first});
        }
        for(int i=0; i<banned.size(); i++){
            freq1[banned[i]]++;
        }
        sort(v.rbegin(),v.rend());

        for(int i=0; i<v.size(); i++){
            if(freq1[v[i].second] == 0) return v[i].second;
        }
        return ""; 
    }
};