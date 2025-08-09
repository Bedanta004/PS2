class Solution {
public:
    long long smallestNumber(long long num) {
        vector<int> arr;
        if(num == 0) return 0;
        long long num1 = abs(num);

        while(num1 != 0){
            arr.push_back(num1%10);
            num1 /= 10;
        }
        sort(arr.begin(),arr.end());
        if(arr[0] == 0){
            for(int i=0; i<arr.size(); i++){
                if(arr[i] != 0){
                    arr[0] = arr[i];
                    arr[i] = 0;
                    break;
                }
            }
        }
        if(num >= 0){
            long long sum = 0;
            for(int num : arr){
                sum = sum*10 + num;
            }
            return sum;
        }
        if(num < 0){
            sort(arr.rbegin(),arr.rend());
            long long sum1 = 0;
            for(int num : arr){
                sum1 = sum1 * 10 + num;
            }
            long long res = sum1 * (-1);
            return res; 
        }
        return 0;
    }
};