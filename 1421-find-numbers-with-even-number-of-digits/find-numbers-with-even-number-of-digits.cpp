class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count =0;

        for(int num : nums){
            if(num < 10) continue;
            int c=0;
            while(num != 0){
                c++;
                num /= 10;
            }
            if(c%2 == 0) count++;
        }
        return count;
    }
};