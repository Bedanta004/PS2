class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        vector<int> ans = nums;
        while(k){
            int ele = *min_element(ans.begin(), ans.end());
            for(int i=0; i<ans.size(); ++i){
                if(ans[i] == ele){
                    ans[i] = ele*multiplier;
                    break;
                }
            }
            k--;
        }
        return ans;
    }
};