class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(rbegin(capacity), rend(capacity));
        int cnt = 0;
        int total = 0;

        for(int a : apple) total += a;
        for(int i : capacity){
            if(total <= 0) break;
            else {
                cnt++;
                total -= i;
            }
        }
        return cnt;
    }
};