class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();

        int mx = nums[0];

        // build prefixGcd in-place
        for(int i = 0; i < n; i++){
            mx = max(mx, nums[i]);
            nums[i] = __gcd(mx, nums[i]);
        }

        // sort for optimal pairing
        sort(nums.begin(), nums.end());

        long long sum = 0;

        // pair smallest with largest
        for(int i = 0; i < n/2; i++){
            sum += __gcd(nums[i], nums[n - i - 1]);
        }

        return sum;
    }
};