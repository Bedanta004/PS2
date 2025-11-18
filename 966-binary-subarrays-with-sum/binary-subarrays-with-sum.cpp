class Solution {
public:
    // Counts subarrays with sum <= goal using sliding window
    int func(vector<int> &nums, int goal) {
        if(goal < 0) return 0;
        int l = 0, r = 0, sum = 0, cnt = 0;

        while(r < nums.size()) {
            sum += nums[r];

            // Shrink window if sum exceeds goal
            while(sum > goal) {
                sum -= nums[l];
                l++;
            }

            // All subarrays ending at r and starting from [l..r] are valid
            cnt += (r - l + 1);
            r++;
        }
        return cnt;
    }
    
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // Exact sum = (≤ goal) - (≤ goal-1)
        return func(nums, goal) - func(nums, goal - 1);
    }
};