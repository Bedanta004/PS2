class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(n%k != 0) return false;

        unordered_map<int,int> freq;
        for(int num : nums) freq[num]++;

        for(auto i : freq){
            if(i.second > n/k) return false;
        }
        return true;
    }
};