class Solution {
public:
    int carFleet(int target, vector<int>& p, vector<int>& s) {
        vector<pair<int,double>> v; // pos,arrival time

        int n=p.size();

        for(int i=0;i<n;i++){
            double time = 1.0*(target- p[i])/s[i];
            v.push_back({p[i],time});
        }

        sort(v.rbegin(),v.rend());


        double prev = v[0].second;
        int ans=1; // 1 cz of prev
        for(int i=1;i<n;i++){
            if(v[i].second > prev){
                ans++;
                prev = v[i].second;
            }
        }
        return ans;
    }
};