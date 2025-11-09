class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        int mini = INT_MAX;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
            if(mp[nums[i]].size() == 3){
                auto &v = mp[nums[i]];
                mini = min(mini, abs(v[0]-v[1])+abs(v[1]-v[2])+abs(v[2]-v[0]));
                mp[nums[i]].erase(mp[nums[i]].begin());
            }
        }
        return mini == INT_MAX ? -1 : mini;
    }
};