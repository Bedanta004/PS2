class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int n = s.size(), maxVal = -1, left = -1, right = -1, maxInd = -1;

        for(int i = n-1; i>=0; --i){
            if(s[i]-'0' > maxVal){
                maxVal = s[i] - '0';
                maxInd = i;
            }
            else if(s[i]-'0' < maxVal){
                left = i;
                right = maxInd;
            }
        }
        if(left != -1) swap(s[left], s[right]);
        return stoi(s);
    }
};