class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int maxi = INT_MIN, mini = INT_MAX;
        int odd = 0, even = 0;

        for(int num : nums1){
            if(num % 2 == 0) even++;
            else odd++;
            maxi = max(maxi, num);
            mini = min(mini, num);
        }
        if(odd == nums1.size() || even == nums1.size()) return true;

        for(int num : nums1){
            if(num%2 != 0) continue;
            if(num - mini <= 0) return false;
        }
        return true;
    }
};