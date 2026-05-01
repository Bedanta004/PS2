class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        long long sum1 = nums[0], sum2 = 0;
        bool b = true;

        for(int i=1; i<nums.size(); ++i){
            if(nums[i] >= nums[i-1] && b){
                sum1 += nums[i];
            }
            else if(nums[i] < nums[i-1] && b){
                b = false;
                sum2 = nums[i-1] + nums[i];
            }
            else{
                sum2 += nums[i];
            }
        }
        if(sum1 > sum2) return 0;
        if(sum2 > sum1) return 1;
        return -1;
    }
};