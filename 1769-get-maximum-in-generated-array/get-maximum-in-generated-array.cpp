class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> v{0, 1};
        if(n == 0) return 0;

        for(int i=1; i<n; i++){
            if(2*i > n || 2*i+1 > n) break;
            v.push_back(v[i]);
            v.push_back(v[i]+v[i+1]); 
        }
        return *max_element(begin(v), end(v));
    }
};