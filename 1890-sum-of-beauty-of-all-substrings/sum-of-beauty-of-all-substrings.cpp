class Solution {
public:
    int beautySum(string s) {
        int amount = 0;
        
        for(int i=0; i<s.size(); ++i){
            unordered_map<char, int> fr;
            
            for(int j=i; j<s.size(); ++j){
                int mini = INT_MAX, maxi = -1;
                fr[s[j]]++;
                for(auto &p : fr){
                    mini = min(mini, p.second);
                    maxi = max(maxi, p.second);
                }
                amount += (maxi - mini);
            }
        }
        return amount;
    }
};