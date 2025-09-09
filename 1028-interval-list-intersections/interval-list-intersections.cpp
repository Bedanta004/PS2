class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
    vector<vector<int>> ans;
    int i = 0, j = 0;

    while (i < firstList.size() && j < secondList.size()) {
    int a = firstList[i][0], b = firstList[i][1];
    int c = secondList[j][0], d = secondList[j][1];

    if (b >= c && d >= a) {
        ans.push_back({max(a, c), min(b, d)});
    }
    if (b < d) i++;
    else j++;
}

return ans;

    }
};