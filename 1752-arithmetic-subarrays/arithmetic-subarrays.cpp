class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;

        for(int i=0; i<l.size(); i++){
            int stInd = l[i], endInd = r[i];
            vector<int> v;
            while(stInd <= endInd){
                v.push_back(nums[stInd]);
                stInd++;
            }
            sort(begin(v), end(v));
            int diff = v[v.size()-1] - v[v.size()-2]; bool check = false;
            for(int j=1; j<v.size(); j++){
                if(v[j] - v[j-1] != diff){
                    check = true;
                    ans.push_back(0);
                    break;
                }
            }
            if(!check) ans.push_back(1);
        }
        return ans;
    }
};