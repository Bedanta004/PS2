class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0, j = mat.size()-1;
        int mid = mat.size()/2;

        for(int i=0; i<mat.size(); ++i){
            if(i == mid && mat.size()%2 != 0) sum += 0;
            else sum += mat[i][i]; 
            sum += mat[j][i];
            --j;
        }
        return sum;
    }
};