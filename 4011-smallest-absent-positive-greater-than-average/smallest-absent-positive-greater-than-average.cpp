class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++) sum += nums[i];
        long long avg = sum/n;
        avg++;
        unordered_set<int>s(nums.begin(),nums.end());
        if(avg<=0) avg = 1;
        while(1){
            if(s.count(avg)==0) return avg;
            avg++;
        }
        return -1;
    }
};