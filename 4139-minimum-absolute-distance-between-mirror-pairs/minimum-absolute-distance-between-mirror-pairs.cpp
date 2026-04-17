class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<string, int> mp;
        int ans = INT_MAX;

        for(int i=0; i<nums.size(); ++i){
            if(mp.count(to_string(nums[i]))){
                string st = to_string(nums[i]);
                ans = min(ans, abs(i - mp[st]));
            }
            string s = to_string(nums[i]);
            reverse(begin(s), end(s));
            int n = stoi(s); mp[to_string(n)] = i;
        }
        return (ans == INT_MAX) ? -1 : ans;
    }
};