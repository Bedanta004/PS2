class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> fibs={1,1};

        while(fibs.back() < k){
            int n = fibs.size();
            fibs.push_back(fibs[n-1]+fibs[n-2]);
        }

        int ans = 0;
        for(int i=fibs.size()-1; i>=0 && k > 0; i--){
            if(fibs[i] <= k){
                k -= fibs[i];
                ans++;
            }
        }
        return ans;
    }
};