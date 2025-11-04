bool  comp(const pair<int,int> &a, const pair<int,int> &b){
    if(a.first != b.first) return a.first>b.first;
    return a.second > b.second;
}
class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i <= n-k; ++i) {
            unordered_map<int, int> freq;
            for (int j = i; j < i + k; ++j)
                freq[nums[j]]++;

            vector<pair<int,int>> v;
            for (auto& f : freq)
                v.push_back({f.second, f.first});

            sort(v.begin(), v.end(), comp);
            
            int sum = 0;
            for(int i=0; i<x; i++){
                if(v.size() <= i) break;
                sum += v[i].first * v[i].second;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
