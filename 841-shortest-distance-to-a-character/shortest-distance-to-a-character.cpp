class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v, ans;

        for(int i=0; i<s.size(); ++i){
            if(s[i] == c) v.push_back(i);
        }
        int l = 0;

        for(int i=0; i<s.size(); ++i){
            if(l+1 < v.size() && v[l] < i) ++l; 

            if(l == 0){
                ans.push_back(abs(v[l] - i));   
            }
            else if(l < v.size()){
                ans.push_back(min(abs(i - v[l]), abs(i - v[l-1]))); 
            }
        }
        return ans;
    }
};