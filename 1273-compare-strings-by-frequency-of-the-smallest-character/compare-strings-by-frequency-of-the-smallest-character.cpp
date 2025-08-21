class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> ans, a, b;

        for(int i=0; i<queries.size(); i++){
            string str = queries[i];
            sort(str.begin(),str.end());
            char ch = str[0];
            int count = 0;
            for(char chr : str){
                if(chr == ch) count++;
                else break;
            }
            a.push_back(count);
        }

        for(int i=0; i<words.size(); i++){
            string str = words[i];
            sort(str.begin(),str.end());
            char ch = str[0];
            int count = 0;
            for(char chr : str){
                if(chr == ch) count++;
                else break;
            }
            b.push_back(count);
        }
        sort(b.begin(),b.end());
        unordered_map<int,int> frq;

        for (int x : a) {
        auto t = upper_bound(b.begin(),b.end(), x);
        ans.push_back(b.end() - t);
    }
    return ans;
    }
};