class Solution {
public:

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        sort(nums.begin(),nums.end());
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    
    }
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans){
        if(index >= nums.size()){
            ans.push_back(output);
            return;
        }

        output.push_back(nums[index]);
        solve(nums, output, index + 1, ans);
        output.pop_back();

        while(index+1 < nums.size() && nums[index] == nums[index+1]){
            index++;
        }
        solve(nums, output, index + 1, ans);
    }
};