class Solution {
public:
    int pivotInteger(int n) {
        unordered_map<int, int> mp;
        int add = 0;
        for(int i=1; i<=n; ++i){
            add += i;
            mp[i] = add;
        }
        add = 0;
        for(int i=n; i>=1; --i){
            add += i;
            if(mp[i] == add) return i;
        }
        return -1;
    }
};