class Solution {
public:
    bool checkDivisibility(int n) {
        int sum =0, product =1;
        int m = n;

        while(m != 0){
            sum += m%10;
            product *= m%10;
            m /= 10;
        }
        if(n % (sum+product) == 0){
            return true;
        }
        return false;
    }
};