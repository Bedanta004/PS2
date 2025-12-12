class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        // if(original.size() <= 2) return ans;

        int i =0;
        while(i < original.size()){
            int t = n;bool b = false;
            vector<int> v;
            while(t > 0 && i < original.size()){
                v.push_back(original[i]); i++;
                t--; b = true;
            }
            if(t == 0){
                ans.push_back(v); m--;
            }
            if(!b || m == 0) break;
        }
        if(m == 0 && i == original.size()) return ans;
        ans.clear();
        return ans;
    }
};