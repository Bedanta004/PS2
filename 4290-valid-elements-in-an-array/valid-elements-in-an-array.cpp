class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int> v(nums.size(), -1);

        int maxi = -1, n = nums.size();

        for(int i=n-1; i>=0; --i){
            if(nums[i] > maxi){
                v[i] = nums[i];
                maxi = nums[i];
            }
        }
        vector<int> ans;
        int mx = -1;

        for(int i=0; i<n; ++i){
            if(nums[i] > mx){
                mx = nums[i];
                ans.push_back(nums[i]);
            }
            else if(v[i] != -1){
                mx = v[i];
                ans.push_back(v[i]);
            }
        }
        return ans;
    }
};