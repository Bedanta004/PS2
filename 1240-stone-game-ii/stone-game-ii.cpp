class Solution {
public:
int solve(vector<int>& piles, int i, int m, int alice){
    if(i == piles.size()) return 0;

    //if its alice's turn start with INT_MIN else INT_MAX
    int ans = alice ? INT_MIN : INT_MAX;
    int total = 0;
    for(int x=1; x <= 2*m; ++x){
        if(i+x-1 >= piles.size()) break;
        total += piles[i+x-1];
        if(alice){
            ans = max(ans, total+solve(piles, i+x, max(x,m), !alice));
        }
        else{
            ans = min(ans, solve(piles, i+x, max(x,m), !alice));
        }
    }
    return ans;
}

int solveMemo(vector<int>& piles, int i, int m, int alice, vector<vector<vector<int>>> &arr){
    if(i == piles.size()) return 0;

    if(arr[i][m][alice] != -1) return arr[i][m][alice];

    //if its alice's turn start with INT_MIN else INT_MAX
    int ans = alice ? INT_MIN : INT_MAX;
    int total = 0; 
    for(int x=1; x <= 2*m; ++x){
        if(i+x-1 >= piles.size()) break;
        total += piles[i+x-1];
        if(alice){
            ans = max(ans, total+solveMemo(piles, i+x, max(x,m), !alice, arr));
        }
        else{
            ans = min(ans, solveMemo(piles, i+x, max(x,m), !alice, arr));
        }
    }
    return arr[i][m][alice] = ans;
}
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        vector<vector<vector<int>>> arr(n + 1, vector<vector<int>>(n + 1, vector<int>(2, -1)));
        return solveMemo(piles, 0, 1, true, arr);
    }
};