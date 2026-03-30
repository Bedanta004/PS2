class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0, n = arr.size();

        for(int i=0; i<n; ++i){
            int total = 0;
            for(int j=i; j<n; ++j){
                total += arr[j];
                if((j-i+1) % 2 != 0) sum += total;
            }
        }
        return sum;
    }
};