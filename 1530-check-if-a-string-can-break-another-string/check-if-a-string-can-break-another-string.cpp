class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        string s3 = s1, s4 = s2;
        sort(s3.begin(),s3.end());
        sort(s4.begin(),s4.end());

        int m = -1, n=-1;
        for(int i=0; i<s3.size(); i++){
            if(s3[i] < s4[i]){
                m=i;
                break;
            }
        }
        for(int i=0; i<s4.size(); i++){
            if(s4[i] < s3[i]){
                n=i;
                break;
            }
        }
        return (m==-1 || n==-1);
    }
};