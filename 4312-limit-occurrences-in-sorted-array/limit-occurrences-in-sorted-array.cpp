class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int, int> fr;

        vector<int> ans;

        for(int num : nums){
            fr[num]++;
            if(fr[num] <= k) ans.push_back(num);
        }
        return ans;
    }
};