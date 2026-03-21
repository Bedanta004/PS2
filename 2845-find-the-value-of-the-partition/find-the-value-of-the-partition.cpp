class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int diff = INT_MAX;

        for(int i=1; i<nums.size(); ++i){
            if(abs(nums[i] - nums[i-1]) < diff) diff = abs(nums[i] - nums[i-1]);
        }
        return diff;
    }
};