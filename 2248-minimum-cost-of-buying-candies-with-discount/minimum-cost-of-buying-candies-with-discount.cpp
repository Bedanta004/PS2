class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(),cost.rend());
        int cst=0;
        int st = 2;

        for(int i=0; i<cost.size(); ++i){
            if(i == st){
                st += 3;
                continue;
            }
            else cst += cost[i];
        }
        return cst;
    }
};