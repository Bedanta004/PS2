class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int absV = INT_MAX, index = 0;

        for(int i=0; i<nums.size(); ++i){
            if(nums[i] == target && abs(i-start)<absV){
                absV = abs(i-start);
            }
        }
        return absV;
    }
};