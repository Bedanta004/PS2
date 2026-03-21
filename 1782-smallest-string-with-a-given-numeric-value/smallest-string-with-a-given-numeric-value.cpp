class Solution {
public:
    string getSmallestString(int n, int k) {
        string s = "";

        while(k && n){
            if(k > 26 && k - 26 >= n){
                k -= 26; s += 'z';
                n--;
            }
            else{
                s += 'a' + (k-n);
                k -= k-n+1;
                n--;
            }
        }
        reverse(begin(s), end(s));
        return s;
    }
};