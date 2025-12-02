class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char, int> freq1, freq2, freq3;

        for(char ch = 'a'; ch <= 'z'; ch++){
            if(ch == 'z' || ch == 'x' || ch == 'c' || ch == 'v' || ch == 'b' || ch == 'n' || ch == 'm'){
                freq3[ch]++; freq3[toupper(ch)]++;
            }
            else if(ch == 'a' || ch == 's' || ch == 'd' || ch == 'f' || ch == 'g' || ch == 'h' || ch == 'j' || ch =='k' || ch == 'l'){
                freq2[ch]++; freq2[toupper(ch)]++;
            }
            else{
                freq1[ch]++; freq1[toupper(ch)]++;
            }
        }
        vector<string> ans;

        for(auto st : words){
            string s = st;int m=0,n =0, o=0;
            for(auto ch : s){
                if(freq1[ch] > 0)m++;
                else if(freq2[ch] > 0)n++;
                else{
                    o++;
                }
            }
            if(m == s.size() || n==s.size() || o==s.size()) ans.push_back(s);
        }
        return ans;
    }
};