class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(rbegin(tasks), rend(tasks));
        sort(begin(processorTime), end(processorTime));

        int ans = 0;
        for(int i=0; i<4*processorTime.size(); ++i){
            ans = max(ans, processorTime[i/4] + tasks[i]);
        }
        return ans;
    }
};