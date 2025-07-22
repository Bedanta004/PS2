class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int result =0, currSum =0, start =0;
        unordered_set<int> seen;

        for(int end =0; end <nums.size(); end++){
            while(seen.find(nums[end]) != seen.end()){
                seen.erase(nums[start]);
                currSum -= nums[start];
                start++;
            }
            currSum += nums[end];
            seen.insert(nums[end]);
            result = max(result, currSum);
        }
        return result;
    }
};