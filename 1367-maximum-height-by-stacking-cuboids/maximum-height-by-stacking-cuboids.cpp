class Solution {
public:
bool check(vector<int> &curr, vector<int> &prev){
    //length is in 0th index
    //width is in 1st index
    //height is in 2nd index
    //conditions
    //curr -> bada wala dabba
    //prev -> chota wala dabba
    if(prev[0] <= curr[0] && prev[1] <= curr[1] && prev[2] <= curr[2]){
        return true;
    }
    return false;
}
int solveUsingTabulation(vector<vector<int>>& cuboids){
    int n = cuboids.size();
    vector<int> currRow(n+1, 0);
    vector<int> nextRow(n+1, 0);

    for(int curr_ind=n-1; curr_ind>=0; curr_ind--){
        for(int prev_ind=curr_ind-1; prev_ind >= -1; prev_ind--){
            int include = 0;

            if(prev_ind == -1 || check(cuboids[curr_ind] ,cuboids[prev_ind])){
                int heightToAdd = cuboids[curr_ind][2];
            include = heightToAdd + nextRow[curr_ind+1];
        }
        //+1 is done with prev index as in loop [rev_ind can go upto -1]
        int exclude = 0 + nextRow[prev_ind+1];
        currRow[prev_ind+1] = max(include,exclude);
        }
        nextRow = currRow;
    }
    return nextRow[0];
}
    int maxHeight(vector<vector<int>>& cuboids) {
        for(auto &cuboid : cuboids){
            sort(cuboid.begin(), cuboid.end());
        }
        sort(cuboids.begin(), cuboids.end());
    int ans = solveUsingTabulation(cuboids);
    return ans;
    }
};