class Solution {
public:
    string largestGoodInteger(string num) {
        string str = "";
        int n =INT_MIN;

        for(int i=0; i<num.size(); i++){
            if(num[i] == num[i+1] && num[i+1] == num[i+2]){
                string w = "";
                w += num[i];
                w += num[i+1];
                w += num[i+2];
                n = max(n, stoi(w));
            }
        }
        if(n == 0) return "000";
        if(n == INT_MIN) return "";
        return to_string(n);
    }
};