class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxS=0, minS=0, ans=0;
        for(int x: nums){
            maxS=max(0, maxS+x);
            minS=min(0, minS+x);
            ans=max(ans, maxS-minS);
        }
        return ans;;
    }
};