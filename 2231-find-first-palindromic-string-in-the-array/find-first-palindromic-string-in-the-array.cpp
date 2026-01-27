class Solution {
public:
bool checkPal(string s){
    int i=0, j = s.size()-1;
    while(i<= j){
        if(s[i] != s[j]) return false;
        i++; j--;
    }
    return true;
}
    string firstPalindrome(vector<string>& words) {
        string ans = "";
        for(auto &i : words){
            if(checkPal(i)){
                ans = i; break;
            }
        }
        return ans;
    }
};