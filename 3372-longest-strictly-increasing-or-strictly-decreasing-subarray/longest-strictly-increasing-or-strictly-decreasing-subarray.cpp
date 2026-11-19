class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int cnt1 = 1, cnt2 = 1, n = nums.size();
        int maxi1 = 1, maxi2 = 1;

        for(int i=1; i<n; ++i){
            if(nums[i] > nums[i-1]){
                cnt1++;
                maxi1 = max(maxi1, cnt1);
                cnt2 = 1;
            }
            else if(nums[i] == nums[i-1]){
                cnt1 = 1;
                cnt2 = 1;
            }
            else if(nums[i] < nums[i-1]){
                cnt2++;
                maxi2 = max(maxi2, cnt2);
                cnt1 = 1;
            }
        }
        return max(maxi1, maxi2);
    }
};