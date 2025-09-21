class Solution {
public:
    int solveUsingMemo(vector<int>& nums, int i, int rem, vector<vector<int>>& dp) {

        if (i == nums.size()) {
            if (rem == 0) return 0;   
            else return -100;    
        }

        if (dp[i][rem] != -1) return dp[i][rem]; 

        // Choice 1: skip nums[i]
        int notTake = solveUsingMemo(nums, i+1, rem, dp);

        // Choice 2: take nums[i]
        int newRem = (rem + nums[i]) % 3;
        int take = nums[i] + solveUsingMemo(nums, i+1, newRem, dp);

        // best answer
        int ans = max(notTake, take);

        dp[i][rem] = ans;
        return ans;
    }

    int maxSumDivThree(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(3, -1));

        int ans = solveUsingMemo(nums, 0, 0, dp);
        return (ans < 0 ? 0 : ans);
    }
};
