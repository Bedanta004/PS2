class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = INT_MAX, sum = 0, n = nums.size();

        for(int i=0; i<n; i++){
            mini = min(mini, nums[i]);
            sum += nums[i];
        }

        return sum - n * mini;
    }
};