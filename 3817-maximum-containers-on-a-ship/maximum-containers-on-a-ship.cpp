class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int count = 0, m = n*n;

        for(int i=0; i<=n*n; i++){
            if(m > 0 && maxWeight-w >= 0){
                count++;
                maxWeight -= w;
                m--;
            }
            else{
                break;
            }
        }
        return count;
    }
};