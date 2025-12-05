class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0;
        for(int num : nums) sum += num;

        int res = 0, cnt = 0;

        for(int i=0; i<nums.size()-1; ++i){
            int num = nums[i];
            cnt += num;
            if(abs(cnt-(sum-cnt))%2 == 0) res++;
            cout<<(cnt-(sum-num))<<" ";
        }
        return res;
    }
};