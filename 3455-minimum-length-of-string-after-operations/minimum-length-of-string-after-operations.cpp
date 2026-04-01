class Solution {
public:
    int minimumLength(string s) {
        int ans = s.size();

        unordered_map<char, int> fr;

        for(char ch : s){
            fr[ch]++;
            if(fr[ch] == 3){
                fr[ch] = 1;
                ans -= 2;
            }
        }
        return ans;
    }
};