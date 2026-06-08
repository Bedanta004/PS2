class Solution {
public:
    bool consecutiveSetBits(int n) {
        string bin = "";
        while(n){
            if(n%2 == 1) bin += '1';
            else bin += '0';
            n /= 2;
        }
        int cnt = 0;
        for(int i=1; i<bin.size(); ++i){
            if(bin[i-1] == '1' && bin[i] == '1') ++cnt;
            if(cnt > 1) return false;
        }
        if(cnt == 1) return true;
        return false;
    }
};