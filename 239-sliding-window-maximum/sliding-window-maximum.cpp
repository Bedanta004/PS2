class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        //process first k elements
        for(int i=0; i<k; i++){
            //insert index
            //jo bhi no. chote hain, remove kar do
            while(!dq.empty() && nums[dq.back()] < nums[i]){
                dq.pop_back();  
            }
            dq.push_back(i);
        }
        //storing ans for first window
        //now max element will be at front of dq
        ans.push_back(nums[dq.front()]);
        //process remaining windows
        for(int i=k; i<nums.size(); i++){
             //removal
             if(!dq.empty() && i-dq.front() >= k){
                dq.pop_front();
             }
             //addition
             while(!dq.empty() && nums[dq.back()] < nums[i]){
                dq.pop_back();
             }
             dq.push_back(i);
             //ans store
             ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};