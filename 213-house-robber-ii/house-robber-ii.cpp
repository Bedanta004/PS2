class Solution {
public:
int solve(vector<int> &nums, int st, int end, vector<int> &dp){
    if(st > end) return 0;
    if(dp[st] != -1) return dp[st];

    int include = nums[st] + solve(nums, st+2, end, dp);
    int exclude = solve(nums, st+1, end, dp);

    return dp[st] = max(include, exclude);
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int> dp1(n+2, -1);
        vector<int> dp2(n+1, -1);
        int rob1 = solve(nums, 1, n-1, dp1);
        int rob2 = solve(nums, 0, n-2, dp2);
        return max(rob1, rob2);
    }
};