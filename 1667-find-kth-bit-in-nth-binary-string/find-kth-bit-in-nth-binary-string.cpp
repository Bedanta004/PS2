class Solution {
public:
string change(string str){
    for(char &ch : str){
        if(ch == '0') ch = '1';
        else ch = '0';
    }
    reverse(begin(str), end(str));
    return str;
}
    char findKthBit(int n, int k) {
        string str = "0";

        for(int i=1; i<=n; ++i){
            str = str + '1' + change(str);
        }
        return str[k-1];
    }
};