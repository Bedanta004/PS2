class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int &num : nums){
            num = abs(num);
            cout<< num<<" ";
        }
        sort(nums.begin(), nums.end());
        long long ans = 0;
        long long i=0, j = nums.size()-1;

        while(i <= j){
            if(i == j){
                ans += nums[j]*nums[j];
                break;
            }
            ans += nums[j]*nums[j];
            ans -= nums[i]*nums[i];
            i++;
            j--;
        }
        return ans;
    }
};