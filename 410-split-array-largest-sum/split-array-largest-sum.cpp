class Solution {
public:
    bool partitions(vector<int>& nums, int k, int m)
    {
        int cnt = 1;
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            if(sum+nums[i]<=m) sum+=nums[i];
            else
            {
                cnt++;
                sum = nums[i];
            }
        }
        if(cnt <= k) return true;
        return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int l = *max_element(nums.begin(),nums.end()); // Max element in array
        int h = accumulate(nums.begin(),nums.end(),0); //Sum of element in array
        while(l<=h)
        {
            int m = (l+h)/2;
            if(partitions(nums,k,m)) h = m-1;
            else l = m+1;
        }
        return l;
    }
};