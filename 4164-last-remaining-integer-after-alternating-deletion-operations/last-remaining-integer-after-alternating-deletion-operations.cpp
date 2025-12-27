class Solution {
public:
    long long lastInteger(long long n) {
        long long mask = 0xAAAAAAAAAAAAAAUL;
        return (mask & (n-1)) + 1;
    }
};