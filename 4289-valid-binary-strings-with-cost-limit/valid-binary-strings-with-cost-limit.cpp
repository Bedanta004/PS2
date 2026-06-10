class Solution {
public:
    string bin(int num, int n, int k) {
        string s = "";

        if(num == 0) s = "0";

        while(num) {
            s += (num % 2) + '0';
            num /= 2;
        }

        reverse(begin(s), end(s));

        while(s.size() < n)
            s.insert(s.begin(), '0');

        int cost = 0;

        for(int i = 1; i < n; i++) {
            if(s[i] == s[i - 1] && s[i] == '1')
                return "@";

            if(s[i] == '1')
                cost += i;
        }

        return (cost <= k) ? s : "@";
    }

    vector<string> generateValidStrings(int n, int k) {
        vector<string> ans;

        for(int i = 0; i < (1 << n); i++) {
            string candidate = bin(i, n, k);

            if(candidate != "@")
                ans.push_back(candidate);
        }

        return ans;
    }
};