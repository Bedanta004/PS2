class Solution {
public:
    bool isDigitorialPermutation(int n) {
        static vector<int> fact{1,1,2,6,24,120,720,5040,40320,362880};

        long long sum = 0, temp = n;

        while(temp){
            sum += fact[temp % 10];
            temp /= 10;
        }

        if(sum < 0) return false;

        vector<int> count1(10,0), count2(10,0);

        while(n){
            count1[n % 10]++;
            n /= 10;
        }

        while(sum){
            count2[sum % 10]++;
            sum /= 10;
        }

        return count1 == count2;
    }
};