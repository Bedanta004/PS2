class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int m = nums[n-1];
        int o = nums[0];

        int d = 1;
        for(int i=1; i<=m; i++){
            if(m%i == 0 && o%i == 0){
                d = max(d, i);
            }
        }
        return d;
    }
};