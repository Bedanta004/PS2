class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ans, arr;
        arr.insert(arr.begin(),items1.begin(),items1.end());
        arr.insert(arr.end(), items2.begin(), items2.end());
        sort(begin(arr), end(arr));
        
        ans.push_back(arr[0]);

        for(int i=1; i<arr.size(); i++){
            if(ans[ans.size()-1][0] == arr[i][0]){
                ans[ans.size()-1][1] += arr[i][1];
            }
            else{
                ans.push_back({arr[i][0], arr[i][1]});
            }
        }
        return ans;
    }
};