class Solution {
public:
bool solve(vector<int> &v, vector<int> &quantity, int ithcustomer){
    if(ithcustomer == quantity.size()) return true;

    for(int i=0; i<v.size(); i++){
        if(v[i] >= quantity[ithcustomer]){
            v[i] -= quantity[ithcustomer];
            if(solve(v, quantity, ithcustomer+1)){
                return true;
            }
            v[i] += quantity[ithcustomer];// backtrack
        }
    }
    return false;
}
    bool canDistribute(vector<int>& nums, vector<int>& quantity) {
        unordered_map<int, int> cnt;
        for(auto &num : nums) cnt[num]++;

        vector<int> v;
        for(auto &i : cnt){
            v.push_back(i.second);
        }
        sort(quantity.rbegin(), quantity.rend());
        return solve(v, quantity, 0);
    }
};