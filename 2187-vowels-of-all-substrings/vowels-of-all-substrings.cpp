class Solution {
public:
    long long countVowels(string word) {
        long long total = 0;
        unordered_set<char> s{'a','e','i','o','u'};
        int n = word.size();

        for(int i=0; i<word.size(); ++i){
            if(s.count(word[i])) total += (long)(n-i) * (long)(i+1);
        }
        return total;
    }
};