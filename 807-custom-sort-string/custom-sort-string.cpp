class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> freq, freq1;
        string str = "";

        for(char ch : s){
            freq[ch]++;
        }

        for(char ch : order){
            while(freq[ch] > 0){
                str += ch;
                freq[ch]--;
                freq1[ch]++;
            }
        }

        for(char ch : s){
            if(freq1[ch] == 0){
                str += ch;
            }
        }

        return str;

    }
};