class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int> freq;
        vector<string> ans;

        string str = words[0];
        for(char ch : str){
            freq[ch]++;
        }

        for(int i=1; i<words.size(); i++){
            unordered_map<char, int> fr1;
            for(char ch : words[i]){
                fr1[ch]++;
            }
            for(auto &c : freq){
                freq[c.first] = min(c.second, fr1[c.first]);
            }
        }

        for(auto &i : freq){
            while(i.second > 0){
                ans.push_back(string(1, i.first));
                i.second--;
            }
        }
        return ans;
    }
};