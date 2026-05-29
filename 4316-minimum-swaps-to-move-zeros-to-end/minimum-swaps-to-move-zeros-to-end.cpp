class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int cnt = 0;
        for(int num : nums)
        if(num == 0) ++cnt;
        int n = nums.size()-1;
        int b=0;
        int temp = cnt;

        while(temp--){
            if(nums[n] == 0)++b;
            --n;
        }
        return cnt-b;
    }
};