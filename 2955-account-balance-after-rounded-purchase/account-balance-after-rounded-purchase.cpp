class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int d1 = 0, d2 = 0;
        if(purchaseAmount %10 == 0) return 100 - purchaseAmount;

        for(int i=purchaseAmount; i<=purchaseAmount+10; ++i){
            if(i%10 == 0){
                d1 = i;
                break;
            }
        }
        for(int i=purchaseAmount; i>=0; --i){
            if(i%10 == 0){
                d2 = i;
                break;
            }
        }
        if(abs(purchaseAmount-d1) > abs(purchaseAmount - d2)) return 100-d2;
        return 100-d1;
    }
};