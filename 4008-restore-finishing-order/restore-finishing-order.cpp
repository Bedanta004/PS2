class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int,int> freq;
        vector<int> ans;

        for(int num : friends) freq[num]++;

        for(int num : order){
            if(freq.count(num)) ans.push_back(num);
        }
        return ans;
    }
};