class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int, int> vis;

        for(int bulb : bulbs) vis[bulb]++;
        vector<int> ans;

        for(auto &i : vis){
            if(i.second%2 != 0) ans.push_back(i.first);
        }
        sort(begin(ans), end(ans));
        return ans;
    }
};