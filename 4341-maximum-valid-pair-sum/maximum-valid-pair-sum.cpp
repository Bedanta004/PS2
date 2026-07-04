class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int sum = 0, maxi=0, l=0;
        for(int i=0; i<nums.size(); ++i){
            while(i-l >= k){
                maxi = max(maxi, nums[l]);
                l++;
            }
            if(maxi != 0) sum = max(sum, maxi+nums[i]);
        }
        return sum;
    }
};