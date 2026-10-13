class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini =589999;
        int diff = 0;

        for(int i=0; i<n; i++){
            mini = min(mini, prices[i]);
            diff = max(diff, prices[i]-mini);
        }
        return diff;
    }
};