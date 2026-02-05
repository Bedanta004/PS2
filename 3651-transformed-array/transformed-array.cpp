class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> ans;
        int  n = nums.size();

        for(int i=0; i<n; ++i){
            int newInd = (i + nums[i]) % n;
            if(newInd < 0) newInd += n;
            ans.push_back(nums[newInd]);
        }
        return ans;
    }
};