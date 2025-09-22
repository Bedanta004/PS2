class Solution {
public:
int solveUsingMemo(vector<int>& nums, int index, int end, vector<int>& dp){
    if(index > end){
        return 0;
    }
    if(dp[index] != -1){
        return dp[index];
    }
    int include = nums[index] + solveUsingMemo(nums, index + 2, end, dp);
    int exclude = solveUsingMemo(nums, index + 1, end, dp);
    dp[index] = max(include, exclude);
    return dp[index];
}
    int rob(vector<int>& nums) {
        int n = nums.size();
    if(n == 1) return nums[0];

    vector<int> dp1(n + 1, -1), dp2(n + 1, -1);
    int case1 = solveUsingMemo(nums, 0, n - 2, dp1); // exclude last
    int case2 = solveUsingMemo(nums, 1, n - 1, dp2); // exclude first
    return max(case1, case2);
    }
};