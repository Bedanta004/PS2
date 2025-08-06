class Solution {
public:
    string processStr(string s) {
       string news = "";

       for(int i=0; i<s.size(); i++){
        if(s[i]>= 'a' && s[i] <= 'z'){
            news += s[i];
        }
        if(s[i] == '#'){
            news += news;
        }
        if(s[i] == '%'){
            reverse(news.begin(),news.end());
        }
        if(s[i] == '*' && news.size()>=1){
            news.erase(news.size()-1);
        }
       }
       return news;
       
    }
};