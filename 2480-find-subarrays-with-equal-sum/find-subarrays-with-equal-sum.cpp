class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int> mp;

        for(int i=0; i<nums.size()-1; ++i){
            if(mp.count(nums[i]+nums[i+1])) return true;
            mp.insert(nums[i]+nums[i+1]);
        }
        return false;
    }
};