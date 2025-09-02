class Solution {
public:
    vector<long long> findMaxSum(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        vector<long long> ans(n);
        vector<pair<int,int>> arr;
        arr.reserve(n);

        for (int i = 0; i < n; ++i)
            arr.emplace_back(nums1[i], i);

        sort(arr.begin(), arr.end());

        priority_queue<long long, vector<long long>, greater<long long>> minHeap;
        long long sum = 0;

        // First element
        minHeap.push(nums2[arr[0].second]);
        sum += nums2[arr[0].second];
        ans[arr[0].second] = 0;  // No smaller nums1 before first

        for (int i = 1; i < n; ++i) {
            int currVal = arr[i].first, currIdx = arr[i].second;
            int prevVal = arr[i-1].first, prevIdx = arr[i-1].second;

            if (currVal == prevVal) {
                ans[currIdx] = ans[prevIdx];
            } else {
                ans[currIdx] = sum;
            }

            minHeap.push(nums2[currIdx]);
            sum += nums2[currIdx];

            if (minHeap.size() > (size_t)k) {
                sum -= minHeap.top();
                minHeap.pop();
            }
        }

        return ans;
    }
};
