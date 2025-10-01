class Solution {
public:
void convertStrsToNums(vector<string>& strs, vector<pair<int,int>> &numStrs){
    for(auto str : strs){
        int zeros = 0, ones = 0;
        for(auto ch : str){
            if(ch == '0') ++zeros;
            else{
                ++ones;
            }
        }
        numStrs.push_back({zeros, ones});
    }
}
int solve(vector<pair<int,int>> &numStrs, int i, int m, int n){
    if(i == numStrs.size()) return 0;

    int zeros = numStrs[i].first;
    int ones = numStrs[i].second;
    int include = 0, exclude = 0;
    if(m - zeros >= 0 && n - ones >= 0){
        include = 1 + solve(numStrs, i+1, m-zeros, n-ones);
    }
    exclude = solve(numStrs, i+1, m, n);
    return max(include, exclude);
}

int solveMemo(vector<pair<int,int>> &numStrs, int i, int m, int n, vector<vector<vector<int>>> &arr){
    if(i == numStrs.size()) return 0;

    if(arr[i][m][n] != -1) return arr[i][m][n];

    int zeros = numStrs[i].first;
    int ones = numStrs[i].second;
    int include = 0, exclude = 0;
    if(m - zeros >= 0 && n - ones >= 0){
        include = 1 + solveMemo(numStrs, i+1, m-zeros, n-ones, arr);
    }
    exclude = solveMemo(numStrs, i+1, m, n, arr);
    return arr[i][m][n] = max(include, exclude);
}
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<pair<int,int>> numStrs;
        vector<vector<vector<int>>> arr(strs.size(), vector<vector<int>>(m+1,vector<int>(n+1, -1)));
        convertStrsToNums(strs, numStrs);
        return solveMemo(numStrs, 0, m, n, arr);
    }
};