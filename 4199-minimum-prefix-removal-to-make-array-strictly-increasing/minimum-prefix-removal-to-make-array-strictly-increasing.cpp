class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int index = INT_MAX, maxCnt = 0;

        for(int i=nums.size()-1; i>0; i--){
            if(nums[i] <= nums[i-1]){
                index = i;
                break;
            }
        }
        return index == INT_MAX ? 0 : index;
    }
};