class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        sort(begin(coins), end(coins));
        int ans = 1;

        for(int num : coins){
            if(ans >= num) ans += num;
            else break;
        }
        return ans;
    }
};