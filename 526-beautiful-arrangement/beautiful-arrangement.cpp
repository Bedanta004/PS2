class Solution {
public:
void count(vector<int> &v, int n, int &ans, int currNum){
    if(currNum == n+1){
        ++ans;
        return;
    }
    for(int i=1; i<=n; ++i){
        if(v[i] == 0 && (currNum % i == 0 || i % currNum == 0)){
            v[i] = currNum;
            count(v, n, ans, currNum+1);
            v[i] = 0; //backtracking
        }
    }
}
    int countArrangement(int n) {
        vector<int> v(n+1);
        int ans = 0;
        count(v, n, ans, 1);
        return ans;
    }
};