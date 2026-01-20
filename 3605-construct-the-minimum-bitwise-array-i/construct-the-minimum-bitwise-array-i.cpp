class Solution {
public:
int number(int num){
    for(int i=1; i<=1000; ++i){
        int res = i | i+1;
        if(res == num) return i;
    }
    return -1;
}
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); ++i){
            ans.push_back(number(nums[i]));
        }
        return ans;
    }
};