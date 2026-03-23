class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;

        for(int i : nums1) mp[i]++;
        for(int i : nums2) mp[i]--;

        int ans = 0;
        for(auto &i : mp){
            if(i.second%2 != 0) return -1;
            if(i.second > 0) ans += i.second/2;
        }
        return ans;
    }
};