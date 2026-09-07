class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int, int> fr;

        for(int num : bills){
            if(num == 5) fr[num]++;
            else if(num == 10){
                fr[num]++;
                if(fr[5] >= 1) fr[5]--;
                else return false;
            }
            else if(num == 20){
                if(fr[10] >= 1 && fr[5] >= 1){
                    fr[10]--;
                    fr[5] -= 1;
                }
                else if(fr[5] >= 3){
                    fr[5] -= 3;
                }
                else return false;
            }
        }
        return true;
    }
};