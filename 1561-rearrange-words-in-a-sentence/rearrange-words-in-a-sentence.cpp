class Solution {
public:
    string arrangeWords(string text) {
        vector<pair<int, string>> v;
        string str = "";

        for(int i = 0; i < text.size(); i++) {
            if (isalpha(text[i])) {
                str += tolower(text[i]);
            }
            if (text[i] == ' ' || i == text.size() - 1) {
                if (!str.empty()) {
                    v.push_back({(int)str.size(), str});
                    str = "";
                }
            }
        }

        stable_sort(v.begin(), v.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
            return a.first < b.first;
        });

        string s;
        for (int i = 0; i < v.size(); i++) {
            if (i > 0) s += ' ';
            s += v[i].second;
        }
        
        if (!s.empty()) s[0] = toupper(s[0]);
        return s;
    }
};