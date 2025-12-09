class Solution {
public:
    long long maxPoints(vector<int>& technique1, vector<int>& technique2, int k) {
        long long ans=accumulate(technique2.begin(),technique2.end(),0LL);
        vector<long long>v;
        int n=technique1.size();
        for(int i=0;i<n;i++){
            v.push_back(technique1[i]-technique2[i]);
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<k;i++){
            ans+=v[i];
        }
        for(int i=k;i<n;i++){
            if(v[i]>0){
                ans+=v[i];
            }
        }
        return ans;
    }
};