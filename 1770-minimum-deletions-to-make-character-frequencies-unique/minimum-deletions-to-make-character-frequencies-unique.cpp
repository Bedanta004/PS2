class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> freq,freq1,freq3;
        vector<int> a,b;

        for(char ch : s){
            freq[ch]++;
        }

        for(auto it : freq){
            a.push_back(it.second);
            freq1[it.second]++;
        }
        //sort(a.begin(),a.end());
        int count =0;
        for(int i=0; i<a.size(); i++){
            int num = a[i];
            if(freq1[a[i]] > 1){
                while(freq1[a[i]] > 1){
                freq1[a[i]]--;
                a[i]--;
                count++;
                if(a[i] > 0)
                    freq1[a[i]]++;
                }
            }
            
        }
        return count;
    }
};