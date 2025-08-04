class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int count = 0;
        vector<bool> used(baskets.size(), false);

        for (int i = 0; i < fruits.size(); i++) {
            for (int j = 0; j < baskets.size(); j++) {
                if (fruits[i] <= baskets[j] && !used[j]) {
                    used[j] = true;
                    count++;
                    break;
                }
            }
        }
        return fruits.size() - count;

    }
};