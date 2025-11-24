class Solution {
public:
int solve(vector<int> &nums, int target, int ind){
    if(target == 0) return 0;
    if(target < 0 || ind >= nums.size()) return INT_MIN;

    int take = 1 + solve(nums, target-nums[ind], ind+1);
    int notTake = solve(nums, target, ind+1);

    return max(take, notTake);
}
int solveMemo(vector<int> &nums, int target, int index, vector<vector<int>> &dp){
    if(target == 0) return 0;
    if(target < 0 || index >= nums.size()) return INT_MIN;

    if(dp[index][target] != -1) return dp[index][target];

    int take = 1 + solveMemo(nums, target-nums[index], index+1, dp);
    int notTake = solveMemo(nums, target, index+1, dp);

    return dp[index][target] = max(take, notTake);
}
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        vector<vector<int>> dp(nums.size()+1, vector<int>(target+1, -1));
        int res = solveMemo(nums, target, 0, dp);
        return (res < 0) ? -1 : res;
    }
};