class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int s = 0, c=0;

        
        for(int j=0; j<costs.size(); j++){
            if(s + costs[j] <= coins){
                // s += costs[j];
                c++;
                s += costs[j];
            }
            else{
                break;
            }
            
        }
        return c;
    }
};