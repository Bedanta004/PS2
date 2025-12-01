class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> ans;
        int sum = 0, curr = 0;
        sort(nums.rbegin(), nums.rend());

        for(int num : nums) sum+=num;

        for(int num : nums){
            if(sum >= curr){
                curr += num; sum -= num;
                ans.push_back(num);
            }
            else break;
        }
        return ans;
    }
};