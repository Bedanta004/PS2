class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int m = nums[nums.size()-1];
        unordered_map<int,int> freq;

        for(int num : nums) freq[num]++;
        int ans = -1;

        for(int i=1; i<=m*2; i++){
            if(freq[k*i] == 0) return k*i;
        }
        return ans;
    }
};