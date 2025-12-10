class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool b1 = false, b2 = false;

        for(int i=1; i<nums.size(); ++i){
            if(nums[i] > nums[i-1]){
                b1 = true; break;
            }
        }
        for(int i=1; i<nums.size(); ++i){
            if(nums[i] < nums[i-1]){
                b2 = true; break;
            }
        }
        if(b1 == true && b2 == true) return false;
        return true;
    }
};