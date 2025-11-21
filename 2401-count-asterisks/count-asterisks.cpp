class Solution {
public:
    int countAsterisks(string s) {
        int ans = 0;
        bool inside = false;

        for (auto& ch : s) {
            if (ch == '|')
                inside = !inside;
            else if (!inside && ch == '*')
                ans++;
        }
        return ans;
    }
};