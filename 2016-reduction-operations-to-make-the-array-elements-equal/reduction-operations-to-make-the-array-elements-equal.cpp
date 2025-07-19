class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        unordered_map<int,int> freq;
        unordered_map<int, bool> visited;

        for(int num : nums){
            freq[num]++;
        }
        vector<int> a;
        // for(auto& i : freq){
        //     a.push_back(i.first);
        // }
        sort(nums.begin(),nums.end());
        int s=0, ans =0;
        int n = nums.size();

        for(int num : nums){
            if(!visited[num]){
            ans += n-freq[num]-s;
            s = s + freq[num];
            visited[num] = true;
            }
        }
        return ans;
    }
};