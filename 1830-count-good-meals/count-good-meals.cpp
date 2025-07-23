class Solution {
public:

    int countPairs(vector<int>& deliciousness) {
        unordered_map<int, int> freq;
        int count = 0;
        const int MOD = 1e9 + 7;

        for (int i = 0; i < deliciousness.size(); i++) {
            for (int p = 1; p <= (1 << 21); p <<= 1) {
                int num = p - deliciousness[i];
                count = (count + freq[num]) % MOD;
            }
            freq[deliciousness[i]]++;
        }

        return count;

    }
};