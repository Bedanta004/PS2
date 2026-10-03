class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans = "";

        for(int i=0; i<number.size(); ++i){
            if(number[i] == digit){
                string news = number;
                news.erase(i, 1);
                if(news > ans) ans = news;
            }
        } 
        return ans;
    }
};