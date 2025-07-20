class Solution {
public:
int pv(int num){
    int count = 0;
    if(num == 0 || num == 1) return 0;
    while (num != 1) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
           // if (num > (INT_MAX - 1) / 3) break; 
            num = 3 * num + 1;
        }
        count++;
    }

    return count;
}
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>> v;

        for(int i=lo; i<=hi; i++){
            v.push_back({pv(i), i});
        }

        sort(v.begin(),v.end());
        return v[k-1].second;
    }
};