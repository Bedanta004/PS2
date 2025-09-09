class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> arr=intervals;

        arr.push_back(newInterval);
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;

        ans.push_back(arr[0]);
        for(int i=1; i<arr.size(); i++){
            if(ans.back()[1] >= arr[i][0]){
                ans.back()[1] = max(ans.back()[1], arr[i][1]);
            }
            else{
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};