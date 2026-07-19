class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int ax =0, ay=0;
        string ans ="";

        for(char ch : s){
            if(ch == y) ++ay;
            else if(ch == x) ++ax;
            else {
                ans += ch;
            }
        }
        while(ay){
            ans += y;
            --ay;
        }
        while(ax){
            ans += x;
            --ax;
        }
        return ans;
    }
};