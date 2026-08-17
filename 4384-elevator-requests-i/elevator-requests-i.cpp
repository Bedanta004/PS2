class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int cnt = 0;
        int back = 0;

        for(int r : requests){
            cnt += abs(back - r);
            back = r;
        }
        return cnt;
    }
};