class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int cnt = 0, prefSum = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;

        for(int num : nums){
            prefSum += num;
            int mod = prefSum % k;

            if(mod < 0) mod += k;

            if(mp.count(mod)){
                cnt += mp[mod];
                mp[mod] += 1;
            }
            else{
                mp[mod] = 1;
            }
        }
        return cnt;
    }
};