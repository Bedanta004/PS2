class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<int,int> freq;
        vector<int> v;

        for(int i=0; i<text.length(); i++){
            if(text[i] == 'b' || text[i] == 'a' || text[i] == 'l' || text[i] == 'o' || text[i] == 'n'){
                freq[text[i]]++;
            }
        }

        for(auto it=freq.begin(); it != freq.end(); it++){
            v.push_back(it->second);
        }
        if(freq.size() < 5) {
            return 0;
        }

        freq['l'] /= 2;
        freq['o'] /= 2;

        for(auto it = freq.begin(); it != freq.end(); it++) {
            v.push_back(it->second);
        }

        int mini = INT_MAX;
        for(int j=0; j<v.size(); j++){
            mini = min(mini,v[j]);
        }
        return mini;
    }
};