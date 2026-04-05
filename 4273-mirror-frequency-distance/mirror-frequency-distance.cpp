class Solution {
public:
    int mirrorFrequency(string s) {
       unordered_map<char, int> fr;
       int ans = 0;
       
       for(char ch : s) fr[ch]++;

       for(char c : s){
            if(fr.find(c) == fr.end()) continue;

            if(isdigit(c)){
                char ch = '0' + (9 - (c - '0'));
                ans += abs(fr[c] - fr[ch]);
                fr.erase(ch);
                fr.erase(c);
            }
            else if(isalpha(c)){
                char ch = 'z' - (c - 'a');
                ans += abs(fr[c] - fr[ch]);
                fr.erase(ch);
                fr.erase(c);
            }
       }
       return ans;
    }
};