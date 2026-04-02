class Solution {
public:
    int minimumDeletions(string word, int k) {
        unordered_map<char, int> fr;

        for(char ch : word) fr[ch]++;
        int cnt = 0;
        vector<int> v;

        for(auto &i : fr) v.push_back(i.second);
        sort(begin(v), end(v));

        int n = v.size(), ans = INT_MAX;

        for(int i=0; i<n; ++i){
            int range = v[i]+k, total = v[i];

            for(int j=i+1; j<n; ++j){
                if(v[j] > range) total += range;
                else total += v[j];
            }
            int remain = word.size()-total;
            ans = min(ans, remain);
        }
        return ans;
    }
};