class Solution {
public:
int solve(vector<int>& nums, int start, int end){
    if(start == end) return nums[start];

    //diff = p1-p2
    int diffByStart = nums[start] - solve(nums, start+1, end);
    int diffByEnd = nums[end] - solve(nums, start, end-1);
    return max(diffByStart, diffByEnd);
}

int solveMemo(vector<int>& nums, int start, int end, vector<vector<int>> &dp){
    if(start == end) return nums[start];

    if(dp[start][end] != -1) return dp[start][end];

    //diff = p1-p2
    int diffByStart = nums[start] - solveMemo(nums, start+1, end, dp);
    int diffByEnd = nums[end] - solveMemo(nums, start, end-1, dp);
    return dp[start][end] = max(diffByStart, diffByEnd);
}
    bool predictTheWinner(vector<int>& nums) {
        vector<vector<int>> dp(nums.size()+1, vector<int>(nums.size()+1, -1));
        return solve(nums, 0, nums.size()-1) >= 0;
    }
}; 