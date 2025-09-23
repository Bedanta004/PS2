class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int , int> map;
        int count = 0;
        for(int i = 0, n = time.size(); i < n; ++i){
            int temp = time[i] % 60;
            count += map[(60 - temp) % 60];
            ++map[temp];
        }
        return count;
    }
};