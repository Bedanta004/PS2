class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int &num : nums){
            int sum = 0;
            while(num){
                sum += num%10;
                num /= 10;
            }
            num = sum;
        }
        return *min_element(begin(nums), end(nums));
    }
};