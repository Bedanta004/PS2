class Solution {
public:
    int findClosest(int x, int y, int z) {
        int c1 = abs(x-z);
        int c2 = abs(y-z);
        if(c1 == c2){
            return 0;
        }
        if(c1 > c2){
            return 2;
        }
        return 1;
    }
};