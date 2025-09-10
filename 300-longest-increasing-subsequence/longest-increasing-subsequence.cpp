class Solution {
public:
int solveUsingRecursion(vector<int>& num, int curr, int prev){
    if(curr >= num.size()){
        return 0;
    }
    int include = 0;
    if(prev == -1 || num[curr] > num[prev]){
        //curr = curr+1 and prev comes to curr 
        include = 1 + solveUsingRecursion(num,curr+1,curr);
    }
    int exclude = 0 + solveUsingRecursion(num,curr+1,prev);
    int ans = max(include,exclude);
    return ans;
}

int solveUsingMemo(vector<int>& num, int curr, int prev, vector<vector<int>>& dp){
    if(curr >= num.size()){
        return 0;
    }
    //if already exists
    //we don't use prev as prev = -1
    //invalid access of index, -1+1 = 0 index
    if(dp[curr][prev+1] != -1){
        return dp[curr][prev+1];
    }
    int include = 0;
    if(prev == -1 || num[curr] > num[prev]){
        //curr = curr+1 and prev comes to curr 
        include = 1 + solveUsingMemo(num,curr+1,curr, dp);
    }
    int exclude = 0 + solveUsingMemo(num,curr+1,prev, dp);
    dp[curr][prev+1] = max(include,exclude);
    return dp[curr][prev+1];
}

int solveUsingTabulation(vector<int>& num){
    int n = num.size();
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

    for(int curr_ind=n-1; curr_ind>=0; curr_ind--){
        for(int prev_ind=curr_ind-1; prev_ind >= -1; prev_ind--){
            int include = 0;
            if(prev_ind == -1 || num[curr_ind] > num[prev_ind]){
            include = 1 + dp[curr_ind+1][curr_ind+1];
        }
        //+1 is done with prev index as in loop [rev_ind can go upto -1]
        int exclude = 0 + dp[curr_ind+1][prev_ind+1];
        dp[curr_ind][prev_ind+1] = max(include,exclude);
        }
    }
    return dp[0][-1+1];
}

    int lengthOfLIS(vector<int>& nums) {
        int curr = 0;
        int prev = -1;
        int n = nums.size();
        //curr is travelling from 0 to n
        //rows = n+1
        //columns is upto n+1 & initializes with -1
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        //int ans = solveUsingMemo(nums,curr,prev, dp);
        int ans = solveUsingTabulation(nums);
        return ans;
    }
};