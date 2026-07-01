class Solution {
public:
    int maxDistance(string moves) {
        int x=0, y=0, cnt=0;

        for(char ch : moves){
            if(ch == 'L') x -= 1;
            else if(ch == 'R') x += 1;
            else if(ch == 'U') y += 1;
            else if(ch == 'D') y -= 1;
            else ++cnt;
        }
        int r = abs(x)+abs(y);
        return r+cnt;
    }
};