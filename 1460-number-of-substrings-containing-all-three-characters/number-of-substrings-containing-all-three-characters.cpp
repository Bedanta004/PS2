class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt = 0, n = s.size();
        unordered_map<char, int> fr;
        int low = 0;

        for(int i=0; i<n; ++i){
            fr[s[i]]++;
            while(fr.size() == 3){
                cnt += n-i;
                fr[s[low]]--;
                if(fr[s[low]] == 0) fr.erase(s[low]);
                low++;
            }
        }
        return cnt;
    }
};