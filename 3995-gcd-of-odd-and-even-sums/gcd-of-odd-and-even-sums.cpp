class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int s=n, t=n;
        int odd =0, even =0;

        for(int i=1; i<=2*n; i++){
            if(s == 0 && t == 0) break;
            else if(i%2 != 0){
                 odd += i;
                 s--;
                 }
            else{
                even += i;
                t--;
            }
        }
        return gcd(odd,even);
    }
};