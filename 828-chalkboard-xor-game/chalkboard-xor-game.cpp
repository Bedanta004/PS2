class Solution {
public:
    bool xorGame(vector<int>& nums) {
        int rs = 0, n = nums.size();

        for(int i : nums){
            rs ^= i;
        }
        if(rs == 0) return true;
        return n%2 == 0;
    }
};