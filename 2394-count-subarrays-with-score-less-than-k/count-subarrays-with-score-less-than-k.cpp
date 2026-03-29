class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int l = 0;
        long long sum = 0, cnt = 0;

        for(int i=0; i<nums.size(); ++i){
            sum += nums[i];

            while(sum * (i-l+1) >= k){
                sum -= nums[l];
                ++l;
            }
            cnt += i-l+1;
        }
        return cnt;
    }
};