class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        for(int num : nums){
            freq[num]++;
        }
        int count =0;

        for(int i=0; i<nums.size(); i++){
            if (freq[nums[i]] == 0) continue;
            if(nums[i] == k - nums[i]){
                if(freq[nums[i]] >= 2){
                    freq[nums[i]]--;
                    freq[k-nums[i]]--;
                    count++;
                }
            }
            else if(nums[i] != k - nums[i]){
                if(freq[k-nums[i]] > 0){
                    count++;
                    freq[nums[i]]--;
                    freq[k-nums[i]]--;
                }
            }
        }
        return count;
    }
};