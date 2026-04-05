class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        unordered_map<int, int> mp,v;
        int maxi = 1;

        for(int i=1; i<=n; ++i){
            if(pow(i, 3) > n) break;
            else mp[i] = pow(i, 3);
            maxi = i;
        }
        vector<int> ans;

        for(int i=1; i<=maxi; ++i){
            for(int j=i; j<=maxi; ++j){
                int num = mp[i] + mp[j];
                v[num]++;
                if(v[num] == 2 && num <= n) ans.push_back(num);
            }
        }
        sort(begin(ans), end(ans));
        return ans;
    }
};