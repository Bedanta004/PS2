class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int maxi = INT_MIN;

        for(int i=0; i<n; i++){
            if((num[i]-'0')%2 != 0){
                maxi = max(maxi, i);
            }
        }
        if(maxi == INT_MIN) return "";

        string str ="";
        for(int i=0; i<=maxi; i++){
            str += num[i];
        }
        return str;
    }
};