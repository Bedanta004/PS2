bool comp(const vector<string> &a, const vector<string> &b){
return stoi(a[1]) < stoi(b[1]);
}
class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        vector<vector<string>> ans;
        set<string> st;
        for(auto &i : orders){
            st.insert(i[2]);
        }

        vector<string> v;
        string s = "Table";
        v.push_back(s);
        for(auto &i : st) v.push_back(i);
        ans.push_back(v);
        v.clear();
        sort(orders.begin(), orders.end(), comp);
        
        set<string> sss; for(auto &i : orders) sss.insert(i[1]);

        string sn = "";
        for(auto &i : orders){
            string sr = i[1];
            if(sr == sn) continue;
            sn = sr;
            vector<string> a;
            a.push_back(sn);

            unordered_map<string, int> mp;
            for(auto &j : orders){
                string news = j[2];
                if(j[1] == sn) mp[news]++;
            }
            for(auto &t : st){
                string news = t;
                int b = mp[news];
                a.push_back(to_string(b));
            }
            ans.push_back(a);
        }
        return ans;
    }
};