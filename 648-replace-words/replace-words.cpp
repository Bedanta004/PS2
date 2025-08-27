class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_map<string, int> freq;

        for (auto t : dictionary) {
            freq[t]++;
        }

        string str = "", ans = "";

        for (int i = 0; i < sentence.size(); i++) {
            if (isalpha(sentence[i])) str += sentence[i];

            if (sentence[i] == ' ' || i == sentence.size() - 1) {
                int m = 0, n = str.size() - 1;
                string h = "";
                bool found = false;

                while (m <= n) {
                    h += str[m];
                    if (freq[h] > 0) {
                        ans += h;
                        ans += ' ';
                        found = true; 
                        break;       
                    }
                    m++;
                }

                if (!found) { 
                    ans += str;
                    ans += ' ';
                }
                str = "";
            }
        }

        if (!ans.empty() && ans.back() == ' ') ans.pop_back(); 
        return ans;

    }
};