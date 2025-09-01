class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        vector<pair<int,int>> v;

        for(int i=0; i<y.size(); i++){
            v.push_back({y[i],x[i]});
        }
        sort(v.rbegin(),v.rend());
        unordered_map<int,int> mp;
        int sum = 0, n =3;

        for(int i=0; i<v.size(); i++){
            int f = v[i].first;
            int s = v[i].second;

            if(!mp.count(s) && n > 0){
                sum += f;
                n--;
                mp[s]++;
            }
        }
        if(n != 0) return -1;
        return sum;
    }
};
