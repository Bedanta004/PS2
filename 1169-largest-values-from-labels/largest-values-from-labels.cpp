class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        int n = values.size();
        vector<pair<int, int>> items;
        
        for (int i = 0; i < n; i++) {
            items.push_back({values[i], labels[i]});
        }
        
        sort(items.rbegin(), items.rend());

        unordered_map<int, int> used;
        int sum = 0;
        for (int i = 0; i < n && numWanted > 0; i++) {
            int val = items[i].first;
            int label = items[i].second;
            if (used[label] < useLimit) {
                sum += val;
                used[label]++;
                numWanted--;
            }
        }
        return sum;
    }
};