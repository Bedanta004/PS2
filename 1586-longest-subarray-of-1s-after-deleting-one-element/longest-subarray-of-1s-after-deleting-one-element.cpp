class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       vector<int> v;
       int onec =0;

       for(int i=0; i<nums.size(); i++){
        if(nums[i] == 1) onec++;
        if(nums[i] == 0 || i == nums.size()-1){
            v.push_back(onec);
            onec = 0;
        }
       }
        if(v.size() == 1) return nums.size()-1;
        int maxi = 0;

        for(int i=1; i<v.size(); i++){
            maxi =  max(maxi, v[i-1]+v[i]);
        }
       
       return maxi;
    }
};