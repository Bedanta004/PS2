class Solution {
public:
    int minPartitions(string n) {
        int maxi = *max_element(begin(n), end(n));
        return maxi - '0';
    }
};