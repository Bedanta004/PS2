class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;

        for(auto &i : strs){
            string p = i;
            sort(begin(p), end(p));
            mp[p].push_back(i);
        }

        vector<vector<string>> res;

        for(auto &i : mp){
            res.push_back(i.second);
        }
        return res;
    }
};