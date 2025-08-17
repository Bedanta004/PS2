class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
       int sum = 0;

       for(int num : nums){
        sum += num;
       }
       int s1 =0;
       vector<int> v;

       for(int i=0; i<n; i++){
        s1 += nums[i];
        if(i == 0) v.push_back(abs((sum-nums[0])-nums[0]*(n-1)));
        else if(i == n-1) v.push_back(abs((sum-nums[n-1])-nums[n-1]*(n-1)));
        else if(i != 0 && i != n-1){
            int s2 = nums[i] * i - (s1 - nums[i]);
            int s3 = (sum - s1) - (n - 1 - i) * nums[i];
            v.push_back(s2+s3);
        }
       }
       return v;
    }
};