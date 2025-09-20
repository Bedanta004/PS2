class Solution {
public:
    string reverseParentheses(string s) {
        deque<int> dq;
        vector<char> ans;

        for(char ch : s){
            if(ch == '('){
                dq.push_back(ans.size());
            }
            else if(ch == ')'){
                int start_ind = dq.back();
                dq.pop_back();
                reverse(ans.begin() + start_ind, ans.end());
            }
            else{
                ans.push_back(ch);
            }
        }
        return string(ans.begin(), ans.end());
    }
};