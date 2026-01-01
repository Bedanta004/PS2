class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        unordered_map<int,int> freq;
        vector<int> v1, v2;

        for(int num : nums2){
            freq[num]++;
        }
        for(int i=0; i<nums1.size(); i++){
            if(freq[nums1[i]] == 0){
                freq[nums1[i]] = 1;
                v1.push_back(nums1[i]);
            }
        }
        ans.push_back(v1);

        unordered_map<int,int> freq1;

        for(int num : nums1){
            freq1[num]++;
        }
        for(int i=0; i<nums2.size(); i++){
            if(freq1[nums2[i]] == 0){
                freq1[nums2[i]] = 1;
                v2.push_back(nums2[i]);
            }
        }
        ans.push_back(v2);
        return ans;
    }
};