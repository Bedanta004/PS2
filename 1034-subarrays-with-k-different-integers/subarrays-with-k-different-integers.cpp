class Solution {
public:
int solve(vector<int> &nums, int k){
    int start = 0, res = 0;
    unordered_map<int, int> mp;

    for(int i=0; i<nums.size(); ++i){
        mp[nums[i]]++;
        while(mp.size() > k){
            mp[nums[start]]--;
            if(mp[nums[start]] == 0) mp.erase(nums[start]);
            start++;
        }
        res += i-start+1;
    }
    return res;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums, k) - solve(nums, k-1);
    }
};