class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int l = 0, ans = 0;
        unordered_map<int, int> fr;
        if(nums.size() == 1) return 1;

        for(int i=0; i<nums.size(); ++i){
            fr[nums[i]]++;

            while(fr[nums[i]] > k){
                fr[nums[l]]--;
                l++;
            }
            if(fr[nums[i]] <= k) ans = max(ans, i-l+1);
        }
        return ans;
    }
};