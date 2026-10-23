class Solution {
public:
    bool threeFibonacciSum(int n) {
        long long a = 0, b = 1, c = 1;

        for(long long i=2; i<=n; ++i){
            long long sum = a+b+c;
            if(sum == n) return true;
            if(a>n || b>n || c>n) return false;
            long long t1 = b, t2 = c;
            c = c + b;
            b = a + b;
            a = t1 + t2 - b;
        }
        return false;
    }
};