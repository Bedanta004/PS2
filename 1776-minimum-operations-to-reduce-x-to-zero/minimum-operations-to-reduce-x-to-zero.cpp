class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0, n = nums.size();

        for(int num : nums) sum += num;
        sum -= x;

        if(sum == 0) return n;
        int maxi = 0, curr_sum = 0, l =0;

        for(int i=0; i<nums.size(); ++i){
            curr_sum += nums[i];

            while(curr_sum > sum && l <= i){
                curr_sum -= nums[l];
                ++l;
            }
            if(curr_sum == sum) maxi = max(maxi, i-l+1);
        }
        return maxi ? n - maxi: -1;
    }
};