class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int m1 = *min_element(begin(nums1), end(nums1));
        int m2 = *min_element(begin(nums2), end(nums2));

        return m2-m1;
    }
};