class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> st;

        for(auto &num : nums) st.insert(num);
        int size = st.size(), ans = 0;

        for(int i=0; i<nums.size(); ++i){
            unordered_set<int> s;
            for(int j=i; j<nums.size(); ++j){
                s.insert(nums[j]);
                if(s.size() == size) ++ans;
            }
        }
        return ans;
    }
};