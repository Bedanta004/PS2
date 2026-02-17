class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> mp1, mp2;
        vector<string> ans;
        int mini = INT_MAX;
        
        for(int i=0; i<list1.size(); ++i){
            mp1[list1[i]] = i;
        }

        for(int j=0; j<list2.size(); ++j){
            if(mp1.count(list2[j])){
                mp2[list2[j]] = mp1[list2[j]] + j;
                mini = min(mini, mp1[list2[j]] + j);
            }
        }
        for(auto &p : mp2){
            if(p.second == mini) ans.push_back(p.first);
        }
        return ans;
    }
};