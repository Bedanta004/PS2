class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini =589999;
        int diff = 0;

        for(int i=0; i<n-1; i++){
            mini = min(mini, prices[i]);
            diff = max(diff, prices[i+1]-mini);
        }
        return diff;
    }
};