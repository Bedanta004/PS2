class Solution {
public:
    string arrangeWords(string text) {
        vector<pair<int, string>> v;
        string str = "";

        // Convert first character to lowercase to handle LeetCode's input
        if (!text.empty() && isupper(text[0])) {
            text[0] = tolower(text[0]);
        }

        // Split and collect words with their lengths
        for(int i = 0; i < text.size(); i++) {
            if (isalpha(text[i])) {
                str += text[i];
            }
            if (text[i] == ' ' || i == text.size() - 1) {
                if (!str.empty()) {
                    v.push_back({(int)str.size(), str});
                    str = "";
                }
            }
        }

        // Sort by length first, original order for same length (stable_sort can be used, but comparator is fine here)
        stable_sort(v.begin(), v.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
            return a.first < b.first;
        });

        // Concatenate the sorted words with spaces
        string s;
        for (int i = 0; i < v.size(); i++) {
            if (i > 0) s += ' ';
            s += v[i].second;
        }
        // Capitalize first letter
        if (!s.empty()) s[0] = toupper(s[0]);
        return s;
    }
};