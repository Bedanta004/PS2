class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> freq, freq1;

        for(char ch : target){
            freq[ch]++;
        }

        for(char ch : s){
            freq1[ch]++;
        }
        int mini = INT_MAX;

        for(auto ch : freq){
            mini = min(mini, freq1[ch.first]/ch.second);
        }
        return mini;
    }
};