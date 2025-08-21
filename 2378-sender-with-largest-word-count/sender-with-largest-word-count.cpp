class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string,int> freq;

        for(int i=0; i<messages.size(); i++){
            string str = messages[i];
            int count = 1;
            for(int j=0; j<str.size(); j++){
                if(str[j] == ' ') count++;
            }
            freq[senders[i]] += count; 
        }
        vector<pair<int,string>> v;

        for(auto &it : freq){
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end(), [](const pair<int,string>& a, const pair<int,string>& b) {
            if(a.first != b.first) return a.first > b.first; // word count descending
            return a.second > b.second; // name descending lexicographically
        });
        return v[0].second;
    }
};