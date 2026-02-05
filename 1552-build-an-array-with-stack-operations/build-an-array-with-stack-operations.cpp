class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int i = 0;
        stack<int> st;
        for(int j=n; j>=1; --j) st.push(j);

        while(i < target.size()){
            if(target[i] != st.top()){
                st.pop();
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            else{
                st.pop();
                ans.push_back("Push");
                i++;
            }
        }
        return ans;
    }
};