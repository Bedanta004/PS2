class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int cnt = 0, n = nums.size();

        for(int i = 0; i < n - 1; ++i){
            int diff = nums[i+1] - nums[i], an = 1;
            for(int j = i + 1; j < n; ++j){
                if(nums[j] - nums[j-1] == diff){
                    an++;
                    if(an >= 3) ++cnt;   // changed from == 3 to >= 3
                } else {
                    break;
                }
            }
        }
        return cnt;
    }
};