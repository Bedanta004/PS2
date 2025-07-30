class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxVal = *max_element(nums.begin(), nums.end());
        int count =1, maxc=1;

        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1] && nums[i] == maxVal) count++;
            if(nums[i] != nums[i-1] && nums[i-1] == maxVal){
                count = 1;
            }
            maxc = max(maxc,count);
        }
        return maxc;
    }
};