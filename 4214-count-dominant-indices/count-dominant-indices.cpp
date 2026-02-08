class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int ans = 0, sum = nums[nums.size()-1], size = 1;
        if(nums.size() < 2) return 0;

        for(int i = nums.size()-2; i>=0; --i){
            if(nums[i] > sum/size) ans++;
            size++;
            sum += nums[i];
        }
        return ans;
    }
};