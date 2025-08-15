class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int> c;
        vector<int> v;

        int m = ranges.size();
        int n = ranges[0].size();

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                c.push_back(ranges[i][j]);
            }
        }
        unordered_map<int,int> freq;
        for(int i=0; i<c.size()-1; i+=2){
            int k = c[i], l = c[i+1];
            while(k <= l){
                freq[k]++;
                k++;
            }
        }
        for(int i=left; i<=right; i++){
            if(freq[i] < 1) return false;
        }
        return true;
    }
};