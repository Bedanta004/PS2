class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        unordered_map<char, int> mp;
        char ch = 'a';

        for(auto &i : weights){
            mp[ch] = i;
            ch++;
        }
        string ans = "";
        for(auto &s : words){
            int total = 0;
            for(auto &chars : s){
                total += mp[chars];
            }
            total %= 26;
            ans += 'z' - total;
        }
        return ans;
    }
};