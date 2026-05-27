class Solution {
public:
char s(char ch){
    return ch - 'a' + 'A';
}
    int numberOfSpecialChars(string word) {
        int cnt = 0;
        unordered_map<char, int> mp;

        for(int i=0; i<word.size(); ++i){
            if(word[i] >= 'a' && word[i] <= 'z') mp[word[i]] = i;
            if(word[i] >= 'A' && word[i] <= 'Z' && !mp.count(word[i])) mp[word[i]] = i;
        }

        for(char ch : word){
            if(ch >= 'a' && ch <= 'z'){
                if(mp.count(s(ch)) && mp.count(ch) && mp[s(ch)] > mp[ch]){
                    ++cnt;
                    mp.erase(ch);
                }
            }
        }
        return cnt;
    }
};