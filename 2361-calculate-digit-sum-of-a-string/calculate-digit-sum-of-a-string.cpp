class Solution {
public:
    string solve(string r, int k) {
        string s = "";
        int sum = 0, num = 0;

        for (char ch : r) {
            sum += ch - '0';
            num++;

            if (num == k) {
                s += to_string(sum);
                num = 0;
                sum = 0;
            }
        }

        if (num > 0) {
            s += to_string(sum);
        }

        return s;
    }

    string digitSum(string s, int k) {
        while (s.size() > k) {
            s = solve(s, k);
        }

        return s;
    }
};