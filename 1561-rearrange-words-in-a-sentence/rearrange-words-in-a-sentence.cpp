class Solution {
public:
    string arrangeWords(string text) {
        text[0] = tolower(text[0]); // Lowercase the first character
        vector<pair<string, int>> words;
        int idx = 0;
        string word = "";
        for (char c : text) {
            if (c == ' ') {
                words.push_back({word, idx++});
                word = "";
            } else {
                word += c;
            }
        }
        words.push_back({word, idx}); // last word

        stable_sort(words.begin(), words.end(), [](const pair<string, int>& a, const pair<string,int>& b) {
            return a.first.size() < b.first.size();
        });

        string result;
        for (int i = 0; i < words.size(); i++) {
            if (i > 0) result += " ";
            result += words[i].first;
        }
        result[0] = toupper(result[0]); // Capitalize first letter
        return result;
    }
};