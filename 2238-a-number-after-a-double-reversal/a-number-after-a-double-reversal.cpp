class Solution {
public:
    bool isSameAfterReversals(int num) {
        string str1 = to_string(num);
        reverse(str1.begin(),str1.end());

        int sum = 0;
        for(char ch : str1){
            sum = sum*10 + ch-'0';
        }
        string str2 = to_string(sum);
        reverse(str2.begin(), str2.end());

        return stoi(str2) == num;
    }
};