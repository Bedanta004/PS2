class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0, ans = 0, l = 0;
        unordered_map<int, int> fr;

        for(int i=0; i<k; ++i){
            sum += nums[i];
            fr[nums[i]]++;
        }
        if(k == fr.size()) ans = sum;

        for(int i=k; i<nums.size(); ++i){
            fr[nums[l]]--;
            if(fr[nums[l]] == 0) fr.erase(nums[l]);
            sum -= nums[l];
            ++l;

            fr[nums[i]]++;
            sum += nums[i];
            if(fr.size()== k) ans = max(ans, sum);
        }
        return ans;
    }
};