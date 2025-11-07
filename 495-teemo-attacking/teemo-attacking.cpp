class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int cnt = 0;

        for(int i=1; i<timeSeries.size(); i++){
            cnt += min(duration, timeSeries[i] - timeSeries[i-1]);
        }
        cnt += duration;
        return cnt;
    }
};