class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int cnt = 0;
        char ch = '0' + x;

        for(int i = 0; i < nums.size(); ++i){
            long long sum = 0;
            for(int j = i; j < nums.size(); ++j){
                sum += nums[j];

                long long tmp = sum;
                while(tmp >= 10) tmp /= 10;
                char k = '0' + tmp;

                char l = '0' + (sum % 10);

                if(ch == k && ch == l) ++cnt;
            }
        }
        return cnt;
    }
};
