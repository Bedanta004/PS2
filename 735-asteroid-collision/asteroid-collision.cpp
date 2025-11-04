class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        stack<int> st;

        for(int num : asteroids){
            if(num > 0){
                st.push(num);
            } else {
                bool destroyed = false;
                while(!st.empty() && st.top() > 0){
                    if(st.top() < -num){
                        st.pop(); // positive asteroid destroyed
                        continue;
                    } else if(st.top() == -num){
                        st.pop(); // both destroyed
                        destroyed = true;
                        break;
                    } else {
                        destroyed = true; 
                        break;
                    }
                }
                if(!destroyed) st.push(num);
            }
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
