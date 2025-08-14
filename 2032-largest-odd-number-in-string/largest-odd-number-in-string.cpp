class Solution {
public:
    string largestOddNumber(string num) {
        string str = num;

        for(int i=str.size()-1; i>=0; i--){
            if((str[i]-'0')%2 != 0){ break;}
            else{
                str.erase(i);
            }
        }
        return str;
    }
};