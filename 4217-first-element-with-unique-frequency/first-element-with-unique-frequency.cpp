class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int> freq, check;

        for(int num : nums) freq[num]++;

        for(auto &i : freq) check[i.second]++;

        for(int num : nums){
            if(check[freq[num]] == 1) {
                return num;
                break;
            }
        }
        return -1;
    }
};