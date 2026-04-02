class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map<char, int> fr;
        if(s.size() < k) return false;

        for(char ch : s) fr[ch]++;
        int oddcnt = 0;

        for(auto &i : fr)
        if(i.second%2 != 0) oddcnt++;

        return oddcnt <= k ? true : false;
    }
};