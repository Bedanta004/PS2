class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int cnt=0;

        for(int i=0; i<hours.size(); ++i){
            for(int j=0; j<hours.size(); ++j){
                if( i<j && (hours[i] + hours[j]) % 24 == 0) cnt++;
            }
        }
        return cnt;
    }
};