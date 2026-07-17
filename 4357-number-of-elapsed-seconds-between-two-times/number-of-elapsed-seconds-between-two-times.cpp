class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int sh = stoi(startTime.substr(0,2)), sm = stoi(startTime.substr(3,2)), ss = stoi(startTime.substr(6,2));
        int eh = stoi(endTime.substr(0,2)), em = stoi(endTime.substr(3,2)), es = stoi(endTime.substr(6,2));

        int ans = 0;

        ans += (eh-sh-1) * 60 *60;
        ans += (60 - sm -1 +em)*60;
        ans += (es+60-ss);
        return ans; 
    }
};