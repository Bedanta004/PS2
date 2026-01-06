class Solution {
public:
    vector<vector<string>> wordSquares(vector<string>& words) {
        vector<vector<string>> ans;
        int n = words.size();

        for(int i=0; i<n; ++i){
            string top = words[i];
            for(int j=0; j<n; j++){
                if(j == i) continue;
                string left = words[j];
                for(int k=0; k<n; ++k){
                    if(k == i || k == j) continue;
                    string right = words[k];
                    for(int l =0; l<n; ++l){
                        if(l == i || l == j || l==k) continue;
                        string bottom = words[l];
                        if(top[0] == left[0] && top[3] == right[0] && bottom[0] == left[3] && bottom[3] == right[3])
                        ans.push_back({top, left, right, bottom});
                    }
                }
            }
        }
        sort(begin(ans), end(ans));
        return ans;
    }
};