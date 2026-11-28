class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int cnt = 0, n = nums.size();

        for(int i=0; i<n; ++i){
            int a = 0, b = 0;
            if(i-1 >= 0) a = nums[i-1];
            if(i+1 < n) b = nums[i+1];

            if(a != 0 && b == 0 && a <= nums[i]) ++cnt;
            if(a == 0 && b != 0 && b <= nums[i]) ++cnt;
            if(a != 0 && b != 0 && (double)(a+b)/2 <= nums[i]) ++cnt;

            if(n == 1) ++cnt;
        }
        return cnt;
    }
};