class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;

        for(char ch : s){
            freq[ch]++;
        }
        vector<pair<int,char>> a;

        for(auto &p : freq){
            a.push_back({p.second,p.first});
        }

        sort(a.rbegin(),a.rend());
        string str = "";

        for(int i=0; i<a.size(); i++){
            while(a[i].first != 0){
                str += a[i].second;
                a[i].first--;
            }
        }
        return str;
    }
};