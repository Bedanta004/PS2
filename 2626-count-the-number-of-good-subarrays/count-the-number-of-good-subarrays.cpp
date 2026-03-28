class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long ans = 0, l = 0;
        unordered_map<long long, int> fr;
        long long cnt = 0;

        for(int i=0; i<nums.size(); ++i){
            cnt += fr[nums[i]];
            fr[nums[i]]++;

            while(cnt >= k){
                ans += nums.size() - i;
                fr[nums[l]]--;
                cnt -= fr[nums[l]];
                ++l;
            }
        }
        return ans;
    }
};