class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> freq;

        for(int i=0; i<words.size(); i++){
            freq[words[i]]++;
        }
        vector<pair<int,string>> a;

        for(auto &i : freq){
            a.push_back({i.second, i.first});
        }
        sort(a.begin(), a.end(), [](const pair<int,string>& x, const pair<int,string>& y) {
            if(x.first != y.first) return x.first > y.first;
                 return x.second < y.second;
        });

        vector<string> v;
        for(int i=0; i<k; i++){
            v.push_back(a[i].second);
        }
        return v;
    }
};