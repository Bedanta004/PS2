class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int, int> fr;
        vector<int> ans{-1, -1};

        for(int num : nums) fr[num]++;
        vector<pair<int, int>> v;

        for(auto &p : fr) v.push_back({p.first, p.second});
        sort(begin(v), end(v));
        int a = v[0].second, b = v[0].first;
        if(nums.size() <= 2) return ans;

        for(int i=1; i<v.size(); ++i){
            if(v[i].first > b && v[i].second != a){
                ans[0] = b; ans[1] = v[i].first;
                return ans;
            }
        }
        return ans;
    }
};