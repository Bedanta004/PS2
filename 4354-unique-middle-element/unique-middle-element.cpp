class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        if(nums.size() == 1) return true;
        int cnt=0, mid = nums[nums.size()/2];

        for(int num : nums){
            if(num == mid) ++cnt;
            if(cnt == 2) return false;
        }
        return true;
    }
};