class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int ind = -1;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1 && ind == -1){
                ind = i;
                continue;
            }
            else if(nums[i] == 1){
                if(i-ind-1 < k) return false;
                else{
                    ind = i;
                }
            }
        }
        return true;
    }
};