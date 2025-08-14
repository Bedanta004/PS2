class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        long long num = 0;
        int sign = 1;

        // 1. Skip leading spaces
        while (i < n && s[i] == ' ') i++;

        // 2. Sign check
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        // 3. Parse digits and check overflow
        while (i < n && isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
            if (num * sign >= INT_MAX) return INT_MAX;
            if (num * sign <= INT_MIN) return INT_MIN;
            i++;
        }

        return (int)(num * sign);
    }
};