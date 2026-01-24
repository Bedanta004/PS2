class Solution {
public:
    int percentageLetter(string s, char letter) {
        int cnt = 0;
        for(char ch : s)
        if(ch == letter) cnt++;

        if(cnt == 0) return 0;
        double d = cnt/(double)s.size();
        cout<<d;
        return (int)(d*100);
    }
};