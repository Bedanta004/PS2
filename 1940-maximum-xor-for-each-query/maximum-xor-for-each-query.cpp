class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size(), xorr = nums[0], maxi = pow(2, maximumBit)-1;
        vector<int> ans(n);

        for(int i=1; i<n; ++i) xorr ^= nums[i];
        for(int i=0; i<n; i++){
            ans[i] = xorr ^ maxi;
            xorr ^= nums[n-i-1];
        }
        return ans;
    }
};