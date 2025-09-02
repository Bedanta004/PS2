class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> freq;

        for(char ch : chars) freq[ch]++;
        int s = 0;

        for(int i=0; i<words.size(); i++){
            string str = words[i];
            unordered_map<char,int> freq1;
            for(int i=0; i<str.size(); i++){
                freq1[str[i]]++;
                if(freq1[str[i]] > freq[str[i]] || freq[str[i]] == 0) break;
                if(freq1[str[i]] <= freq[str[i]] && i == str.size()-1) s += str.size();
            }
        }
        return s;
    }
};