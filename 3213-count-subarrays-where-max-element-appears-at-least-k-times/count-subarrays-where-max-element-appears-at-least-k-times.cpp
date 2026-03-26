class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long maxEl = *max_element(nums.begin(), nums.end());
        long long count = 0, l = 0, maxFound = 0, n = nums.size();
        

        for (int r = 0; r < n; ++r) {
            if (nums[r] == maxEl) maxFound++;

            while (maxFound >= k) {
                if (nums[l] == maxEl) maxFound--;
                l++;
            }
            count += l;
        }
        return count;
    }
};