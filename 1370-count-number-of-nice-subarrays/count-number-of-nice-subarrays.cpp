class Solution {
public:
int solve(vector<int> &nums, int k){
    int l = 0, cnt = 0, ans = 0;

    for(int i=0; i<nums.size(); ++i){
        if(nums[i] & 1) ++cnt;

        while(cnt > k){
            if(nums[l] & 1) cnt--;
            ++l;
        }
        ans += (i-l+1);
    }
    return ans;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        return solve(nums, k) - solve(nums, k-1);
    }
};