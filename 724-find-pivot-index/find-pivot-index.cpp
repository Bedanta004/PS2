class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int index = -1, sum = 0;

        for(int num : nums) sum += num;
        int curr_sum = 0;

        for(int i=0; i<nums.size(); i++){
            //curr_sum += nums[i];
            if(curr_sum == sum-nums[i]-curr_sum){
                index = i;
                break;
            }
            curr_sum += nums[i];
        }
        return index;
    }
};