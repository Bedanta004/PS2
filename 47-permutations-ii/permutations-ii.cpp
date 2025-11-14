class Solution {
public:
void permute(vector<int> &nums, vector<vector<int>> &ans, int start){
    if(start == nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int i=start; i<nums.size(); ++i){
        swap(nums[i], nums[start]);
        permute(nums, ans, start+1);
        swap(nums[i], nums[start]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans, res;
        vector<int> v;
        permute(nums, ans, 0);

        set<vector<int>> st;
        for(auto &i : ans){
            st.insert(i);
        }
        for(auto &i : st){
            res.push_back(i);
        }
        return res;
    }
};