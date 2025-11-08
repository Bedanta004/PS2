class Solution {
public:
    int minimumOneBitOperations(int n) {
        int res = 0;
        while(n){
            res ^= n;
            n /= 2;
        }
        return res;
    }
};