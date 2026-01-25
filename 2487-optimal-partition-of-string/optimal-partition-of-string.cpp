class Solution {
public:
    int partitionString(string s) {
        int i = 0, cnt = 0;
        string str = "";
        unordered_set<int> se;

        while(i < s.size()){
            if(!se.count(s[i])){
                se.insert(s[i]);
            }
            else{
                se.clear();
                se.insert(s[i]);
                cnt++;
            }
            i++;
        }
        return se.size() > 0 ? cnt+1 : cnt;
    }
};