class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> v;
        unordered_map<int,int> freq;
        int m = nums[0].size();

        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<m; j++){
                v.push_back(nums[i][j]);
            }
        }
        int cnt =0;

        for(int i=0; i<v.size()-1; i+=2){
            int s = v[i], t = v[i+1];
            while(s <= t){
                if(freq[s] == 0) cnt++;
                freq[s]++;
                s++;
            }
        }
        return cnt;
    }
};