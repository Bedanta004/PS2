class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.empty()) return ans;

        int start = nums[0];  // track start of range
        for(int i = 1; i < nums.size(); ++i){
            if(nums[i] != nums[i-1] + 1){
                if(start != nums[i-1]){
                    ans.push_back(to_string(start) + "->" + to_string(nums[i-1]));
                } else {
                    ans.push_back(to_string(start));
                }
                start = nums[i]; // reset start
            }
        }
        // handle last range
        if(start != nums.back()){
            ans.push_back(to_string(start) + "->" + to_string(nums.back()));
        } else {
            ans.push_back(to_string(start));
        }
        return ans;
    }
};
