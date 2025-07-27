class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> a;
        a.push_back(nums[0]);
        int m = nums[0];

        for(int i=1; i<nums.size(); i++){
            if(nums[i] != m){
                a.push_back(nums[i]);
                m = nums[i];
            }
        }
        int count =0;
        for(int i=1; i<a.size()-1; i++){
            if((a[i]>a[i-1] && a[i]>a[i+1]) || (a[i]<a[i-1] && a[i]<a[i+1])) count++;
        }
        return count;
    }
};