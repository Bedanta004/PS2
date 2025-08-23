class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        unordered_map<char,int> freq;
        int m=0;

        for(int i='a'; i<='z'; i++){
            freq[i] = m; 
            m++;
        }
        int s1=0, s2=0, s3=0;

        for(char ch : firstWord){
            s1 = s1*10 + freq[ch];
        }
        for(char ch : secondWord){
            s2 = s2*10 + freq[ch];
        }
        for(char ch : targetWord){
            s3 = s3*10 + freq[ch];
        }

        return (s1+s2) == s3;
    }
};