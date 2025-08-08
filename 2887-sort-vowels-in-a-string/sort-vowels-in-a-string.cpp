class Solution {
public:
    string sortVowels(string s) {
        vector<char> a;

        for(char ch : s){
            if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                a.push_back(ch);
            }
        }
        sort(a.begin(),a.end());
        int i=0;
        string str ="";

        for(char ch : s){
            if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                str += a[i];
                i++;
            }
            else{
                str += ch;
            }
        }
        return str;
    }
};