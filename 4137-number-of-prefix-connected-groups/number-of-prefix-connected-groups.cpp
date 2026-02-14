class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string, int> fr;

        for(auto &s : words){
            if(s.size() < k) continue;
            else{
                string str = "";
                for(int i=0; i<k; ++i) str += s[i];
                fr[str]++;
            }
        }
        int cnt = 0;
        for(auto &p : fr) if(p.second > 1) cnt++;
        return cnt;
    }
};