class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int maxi = INT_MIN;
        unordered_map<int, int> mp;

        for(int num : nums){
            int a = num, b=INT_MAX, c=INT_MIN;
            while(a){
                b=min(b, a%10); c=max(c, a%10);
                a /= 10;
            }
            maxi = max(maxi, c-b);
            mp[num] = c-b;
        }
        int sum=0;

        for(int num : nums){
            if(mp[num] == maxi) sum += num;
        }
        return sum;
    }
};