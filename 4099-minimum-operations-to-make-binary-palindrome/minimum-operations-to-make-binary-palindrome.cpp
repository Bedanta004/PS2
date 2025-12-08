class Solution {
public:
bool check(long long num){
    if(num == 0 || num == 1) return true;

    string s = to_string(num);
    int i = 0, j = s.size() - 1;
    while(i <= j){
        if(s[i] != s[j]) return false;
        i++; j--;
    } 
    return true;
}

long long binary(long long num){
    if(num == 0) return 0;                     // <-- FIX 1 (minimal)

    string str = "";
    while(num){
        str += char('0' + (num % 2));
        num /= 2;
    }
    reverse(str.begin(), str.end());
    return stoll(str);
}

vector<int> minOperations(vector<int>& nums) {
    vector<int> ans;

    for(int num : nums){
        long long no = binary(num);

        if(check(no)) {
            ans.push_back(0);
        }
        else{
            for(int i = 1; i <= INT_MAX; i++){
                long long c = binary(num + i);

                if(check(c)){
                    ans.push_back(i);          // <-- FIX 2
                    break;
                }

                if(num - i >= 0){              // <-- FIX 3
                    long long s = binary(num - i);
                    if(check(s)){
                        ans.push_back(i);      // <-- FIX 2
                        break;
                    }
                }
            }
        }
    }
    return ans;
}
};
