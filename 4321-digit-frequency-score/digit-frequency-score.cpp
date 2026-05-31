class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> fr;
        int t = n;
        while(t){
            fr[t%10]++;
            t /= 10;
        }
        t=n;
        int ans = 0;
        while(t){
            if(fr.count(t%10)) ans += (t%10) * fr[t%10];
            fr.erase(t%10);
            t /= 10;
        }
        return ans;
    }
};