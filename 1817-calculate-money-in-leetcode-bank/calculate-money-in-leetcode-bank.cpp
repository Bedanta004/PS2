class Solution {
public:
    int totalMoney(int n) {
        int m=1, sum =0;
        
        for(int i=1; i<n; i++){
            if(i%7 == 0){
                m = i/7;
            }
            m++;
            sum += m;
        }
        return sum+1;
    }
};