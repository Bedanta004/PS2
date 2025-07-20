class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size()-1,i=0;

        int sum = INT_MIN;

        while(i < n){
            sum = max(sum, nums[i]+nums[n]);
            i++;
            n--;
        }
        return sum;
    }
};