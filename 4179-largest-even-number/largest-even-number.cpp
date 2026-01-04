class Solution {
public:
    string largestEven(string s) {
        string str = s;
        for(int i=str.size()-1; i>=0; --i){
            if((str[i]-'0')%2 != 0) str.erase(i, 1);
            else break;
        }
        return str;
    }
};