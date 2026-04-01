class Solution {
public:
    int numSplits(string s) {
        int cnt = 0;
        unordered_map<char,int> fr1, fr2;

        for(char ch : s) fr1[ch]++;

        for(char ch : s){
            fr1[ch]--;
            fr2[ch]++;
            if(fr1[ch] == 0) fr1.erase(ch);
            if(fr1.size() == fr2.size()) ++cnt;
        }
        return cnt;
    }
};