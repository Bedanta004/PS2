class Solution {
public:
long long solve(vector<int> &nums, vector<int> &colors, int index, vector<long long> &dp){
    if(index == 0) return nums[index];
    if(index < 0) return 0;
    long long ans = 0;

    if(dp[index] != -1) return dp[index];

    if(colors[index] == colors[index-1]){
        ans = max(nums[index] + solve(nums, colors, index-2, dp), solve(nums, colors, index-1, dp));
    }
    else{
        ans = nums[index] + max(ans, solve(nums, colors, index-1, dp));
    }
    return dp[index] = ans;
}
    long long rob(vector<int>& nums, vector<int>& colors) {
        int n = nums.size();
        vector<long long> dp(n+1, -1);
        return solve(nums, colors, n-1, dp);
    }
};