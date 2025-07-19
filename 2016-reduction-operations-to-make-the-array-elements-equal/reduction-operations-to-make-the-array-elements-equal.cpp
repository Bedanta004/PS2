class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        unordered_map<int,int> freq;

        for(int num : nums){
            freq[num]++;
        }
        vector<int> a;
        for(auto& i : freq){
            a.push_back(i.first);
        }
        sort(a.begin(),a.end());
        int s=0, ans =0;
        int n = nums.size();

        for(int num : a){
            ans += n-freq[num]-s;
            s = s + freq[num];
        }
        return ans;
    }
};