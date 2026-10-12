class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(begin(nums), end(nums));
        int cnt = 0;
        int maxi = nums[0], mini = nums[0];

        for(int i=1; i<nums.size(); ++i){
            maxi = max(maxi, nums[i]);
            mini = min(mini, nums[i]);
            if(maxi - mini > k){
                ++cnt;
                maxi = nums[i];
                mini = nums[i];
            }
        }
        return cnt+1;
    }
};