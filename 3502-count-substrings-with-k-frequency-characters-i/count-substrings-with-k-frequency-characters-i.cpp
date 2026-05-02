class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int cnt = 0;
        int l = 0, n = s.size();

        unordered_map<char, int> fr;

        for(int i=0; i<s.size(); ++i){
            fr[s[i]]++;

            while(fr[s[i]] >= k){
                cnt += n-i;
                fr[s[l]]--;
                ++l;
            }
        }
        return cnt;
    }
};