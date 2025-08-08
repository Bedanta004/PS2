class Solution {
public:
    string reverseStr(string s, int k) {
        vector<int> a;
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i == j) {
                a.push_back(i);
                j = i + 2 * k;
            }
        }

        int m = 0;
        int n = s.size();

        for (int i = 0; i < s.size(); i++) {
            if (m < a.size() && i == a[m]) {
                int e = a[m];
                int r = min(a[m] + k - 1, n - 1);  
                while (e < r) {
                    swap(s[e], s[r]);
                    e++;
                    r--;
                }
                m++;
            }
        }
        return s;
    }
};