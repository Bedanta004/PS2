class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        unordered_map<int, int> mp1, mp2;
        int maxi = INT_MIN, mini = INT_MAX;

        for(int i=0; i<nums.size(); ++i){
            maxi = max(maxi, nums[i]);
            mp1[i] = maxi;
        }
        for(int i=nums.size()-1; i>=0; --i){
            mini = min(mini, nums[i]);
            mp2[i] = mini;
        }

        for(int i=0; i<nums.size(); ++i){
            if(mp1[i] - mp2[i] <= k) return i;
        }
        return -1;
    }
};