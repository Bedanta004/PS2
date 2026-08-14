class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l = 0, ans = 0;
        unordered_map<char, int> fr;

        for(int i=0; i<s.size(); ++i){
            fr[s[i]]++;

            while(fr[s[i]] > 2){
                fr[s[l]]--;
                ++l;
            }
            ans = max(ans, i-l+1);
        }
        return ans;
    }
};