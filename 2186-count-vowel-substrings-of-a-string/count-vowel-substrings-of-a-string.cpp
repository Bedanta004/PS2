class Solution {
public:
int count(string &word, int ind){
    int res = 0;
    unordered_set<char> mp;
    for(int j =ind; j<word.size(); ++j){
        mp.insert(word[j]);
        if(word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u') return res;
        if(mp.size() == 5) res++;
    }
    return res;
}
    int countVowelSubstrings(string word) {
        int ans = 0;
        for(int i=0; i<word.size(); ++i){
            if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
                ans += count(word, i);
            }
        }
        return ans;
    }
};