class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
       int mini = INT_MAX;
       int n = nums[0];
       sort(nums.rbegin(),nums.rend());

       for(int num : nums){
        if(abs(num-0) < mini){
            mini = abs(num-0);
            n = num;
        }
       } 
       return n;
    }
};