class Solution {
public:
bool check(int num){
    while(num){
        if(num%2 == 0) return false;
        num /= 2;
    }
    return true;
}
    int smallestNumber(int n) {
        for(int i=n; i<INT_MAX; i++){
            if(check(i)) return i;
        }
        return -1;
    }
};