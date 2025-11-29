class Solution {
public:
void solve(vector<int> &nums, vector<vector<int>> &a, vector<int> &v, int ind){
    if(ind >= nums.size()){
        a.push_back(v);
        return;
    }
    solve(nums, a, v, ind+1);

    v.push_back(nums[ind]);
    solve(nums, a, v, ind+1);
    v.pop_back();
}
bool check(vector<int> &s){
    vector<int> c=s;
    sort(c.begin(), c.end());
    if(c == s && c.size() >= 2) return true;
    return false;
}
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> a;
        vector<int> v;
        solve(nums, a, v, 0);

        vector<vector<int>> ans;
        set<vector<int>> st;
        for(auto &i : a){
            if(check(i)) st.insert(i);
        }
        for(auto &i : st){
            ans.push_back(i);
        }
        return ans;
    }
};