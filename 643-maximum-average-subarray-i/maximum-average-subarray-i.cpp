class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = 0;
        double window = 0, avg = 0;

        for(int i=0; i<k; i++){
            window += nums[i];
        }
        avg = window/k;

        for(int i=k; i<nums.size(); i++){
            window += nums[i] - nums[i-k];
            avg = max(avg, window/k);
        }
        return avg;
    }
};