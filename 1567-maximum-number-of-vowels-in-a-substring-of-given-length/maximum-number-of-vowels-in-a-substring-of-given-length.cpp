class Solution {
public:
    int maxVowels(string s, int k) {
        int l = 0, cnt = 0;
        unordered_set<char> st{'a','e','i','o','u'};

        for(int i=0; i<k; ++i){
            if(st.count(s[i])) cnt++;
        }
        int ans = cnt;

        for(int i=k; i<s.size(); ++i){
            if(st.count(s[l])){
                --cnt;
            }
            ++l;
            if(st.count(s[i])) ++cnt;
            ans = max(ans, cnt);
        }
        return ans;
    }
};