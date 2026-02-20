class Solution {
public:
    string makeLargestSpecial(string s) {
        int cnt = 0, j = 0;
        vector<string> str;

        for(int i=0; i<s.size(); ++i){
            cnt += s[i] == '1' ? 1 : -1;
            if(cnt == 0){
                str.push_back('1' + makeLargestSpecial(s.substr(j+1, i-j-1)) + '0');
                j = i+1;
            }
        }
        sort(rbegin(str), rend(str));
        string res;
        for(auto &i : str) res += i;
        return res;
    }
};