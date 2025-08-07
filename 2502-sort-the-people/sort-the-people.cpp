class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> ab;

        for(int i=0; i<heights.size(); i++){
            ab.push_back({heights[i],names[i]});
        }

        vector<string> ans;
        sort(ab.rbegin(),ab.rend());

        for(int i=0; i<ab.size(); i++){
            ans.push_back(ab[i].second);
        }
        return ans;
    }
};