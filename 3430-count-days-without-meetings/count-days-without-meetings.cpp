class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());

        int cnt = 0;
        int lastEnd = meetings[0][1];
        cnt += meetings[0][1] - meetings[0][0] + 1;  
        for(int i = 1; i < meetings.size(); i++){
            if(meetings[i][0] <= lastEnd){
                // overlap: only add the extra uncovered part
                if(meetings[i][1] > lastEnd){
                    cnt += meetings[i][1] - lastEnd;
                    lastEnd = meetings[i][1];
                }
            } else {
                
                cnt += meetings[i][1] - meetings[i][0] + 1;
                lastEnd = meetings[i][1];
            }
        }

        return days - cnt;   
    }
};
