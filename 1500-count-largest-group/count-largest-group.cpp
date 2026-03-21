class Solution {
public:
int number(int num){
    int sum = 0;

    while(num){
        sum += num%10;
        num /= 10;
    }
    return sum;
}
    int countLargestGroup(int n) {
        unordered_map<int, int> mp;
        int a = 0, ans = 0;

        for(int i=1; i<=n; ++i){
            int n = number(i);
            mp[n]++;
            a = max(a, mp[n]);
        }
        for(auto &i : mp){
            if(i.second == a) ++ans;
        }
        return ans;
    }
};