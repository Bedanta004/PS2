class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(rbegin(prices), rend(prices));
        sort(rbegin(discounts), rend(discounts));

        double ans = 0;
        for(int i=0; i<prices.size(); ++i){
            if(i < discounts.size()){
                ans += (double) prices[i] * (100-discounts[i]) / 100;
            }
            else ans += prices[i];
        }
        return ans;
    }
};