class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0, j = 0;
        stack<int> st;

        while (i < pushed.size() || !st.empty()) {
            if (!st.empty() && st.top() == popped[j]) {
                st.pop();
                j++;
            } else if (i < pushed.size()) {
                st.push(pushed[i]);
                i++;
            } else {
                break;
            }
        }
        return st.empty();
    }
};