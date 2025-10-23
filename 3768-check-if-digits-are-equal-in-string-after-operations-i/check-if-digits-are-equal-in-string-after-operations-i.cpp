class Solution {
public:
    string solve(string st) {
        string sr = "";
        for (int i = 1; i < st.size(); i++) {
            int num1 = st[i] - '0', num2 = st[i - 1] - '0';
            sr += to_string((num1 + num2) % 10);
        }
        return sr;
    }

    bool hasSameDigits(string s) {
        string str = s;
        while (str.size() > 2) {
            str = solve(str);
        }
        cout << str;  // Optional: for debugging
        return str[0] == str[1];
    }
};
