class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int zero = -1, one = -1, diff = INT_MAX;

        for(int i=0; i<nums.size(); ++i){
            if(nums[i] == 1){
                one = i;
                if(zero >= 0)diff = min(diff, abs(zero-one));
            }
            if(nums[i] == 2){
                zero = i;
                if(one >= 0) diff = min(diff, abs(zero-one));
            }
        }
        return diff == INT_MAX ? -1 : diff;
    }
};