class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> fr1, fr2;

        for(auto &i : words1){
            fr1[i]++;
        }
        for(auto &i : words2){
            fr2[i]++;
        }
        int cnt = 0;
        for(auto &i : words1){
            if(fr1[i] == 1 && fr2[i] == 1) {cnt++; cout<<i<<" ";}
        }
        return cnt;
    }
};