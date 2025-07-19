class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int, int>> a;

        for (int num : arr) {
            int diff = abs(num - x);
            a.push_back({diff, num});
        }

        
        sort(a.begin(), a.end());

        vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(a[i].second);
        }

        sort(result.begin(), result.end());
        return result;

    }
};