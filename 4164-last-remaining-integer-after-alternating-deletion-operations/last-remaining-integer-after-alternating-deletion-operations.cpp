class Solution {
public:
    long long lastInteger(long long n) {
        long long mask = 0xAAAAAAAAAAAAAAAAULL;
        return (mask & (n-1)) + 1;
    }
};