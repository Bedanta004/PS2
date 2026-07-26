class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size = nums.size() - 1;
        
        int ans1 = nums[size] * nums[size-1] * nums[size-2];
        int ans2 = nums[0] * nums[1] * nums[size];
        return max(ans1, ans2);
    }
};