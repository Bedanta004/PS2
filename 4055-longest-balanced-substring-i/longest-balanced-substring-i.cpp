class Solution {
public:
    int longestBalanced(string s) {
        int maxlen = 0;

        for(int i=0; i<s.size(); ++i){
            unordered_map<char, int> fr;
            for(int j=i; j<s.size(); ++j){
                fr[s[j]]++;
                bool b = true;
                int num = 0;
                if(fr.size() != 0){
                    for(auto &ch : fr) {
                        num = ch.second; break;
                    }
                    for(auto &ch : fr){
                        if(ch.second != num){
                            b=false; break;
                        }
                    }
                }
                if(b) maxlen = max(maxlen, j-i+1);
            }
        }
        return maxlen;
    }
};