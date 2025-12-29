class Solution {
public:
    long long minEnd(int n, int x) {
        long long ans = x;
        long long add = n - 1;
        int bit = 0;

        while(add){
            if((x & (1LL << bit)) == 0){
                if(add & 1) ans |= (1LL << bit);
                add >>= 1;
            }
            bit++;
        }
        return ans;
    }
};
