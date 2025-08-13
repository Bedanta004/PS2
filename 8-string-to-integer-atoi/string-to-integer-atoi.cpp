class Solution {
public:
    int myAtoi(string s) {
        string str = "";
        bool started = false;

        for (int i = 0; i < s.size(); i++) {
    if (str.size() == 0 && s[i] == ' ') continue;

    else if (isalpha(s[i])) break;

    else if (str.size() == 0 && (s[i] == '+' || s[i] == '-'))
        str += s[i];

    else if (isdigit(s[i])) {
        str += s[i];
        continue;
    }

    else break;
}

// ✅ Fix 1: Check empty or only sign string
if (str.empty() || (str.size() == 1 && (str[0] == '+' || str[0] == '-')))
    return 0;

// ✅ Fix 2: Manual conversion to prevent stoll overflow
long long num = 0;
int sign = 1;
int idx = 0;
if (str[0] == '+' || str[0] == '-') {
    if (str[0] == '-') sign = -1;
    idx = 1;
}
for (; idx < str.size(); idx++) {
    int digit = str[idx] - '0';
    if (num > (LLONG_MAX - digit) / 10)  // overflow check
        return sign == 1 ? INT_MAX : INT_MIN;
    num = num * 10 + digit;
}
num *= sign;

// ✅ Fix 3: Clamp to int range
if (num > INT_MAX) return INT_MAX;
if (num < INT_MIN) return INT_MIN;

return (int)num;

    }
};