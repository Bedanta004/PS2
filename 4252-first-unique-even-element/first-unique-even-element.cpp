class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int, int> fr;

        for(int num : nums){
            fr[num]++;
        }
        for(int num : nums){
            if(fr[num] < 2 && num %2 == 0) return num;
        }
        return -1;
    }
};