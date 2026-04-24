class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans = -1, n = nums.size();

        for(int i=0; i<n; ++i){
            int mini = INT_MAX, maxi = INT_MIN;
            for(int j=0; j<n; ++j){
                if(j <= i) maxi = max(maxi, nums[j]);
                if(j >= i) mini = min(mini, nums[j]);
                if(maxi != INT_MIN && mini != INT_MAX && maxi - mini <= k && j == n-1) return i;
            }
        }
        return ans;
    }
};