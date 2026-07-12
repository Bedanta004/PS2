class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> freq,mp;
        vector<int> a,b;

        for(int num : arr){
            freq[num]++;
        }

        for(auto& it : freq){
            a.push_back(it.first);
        }
        sort(a.begin(),a.end());

        for(int i=0; i<a.size(); i++){
            mp[a[i]] = i+1;
        }

        for (int i = 0; i < arr.size(); i++) {
          b.push_back(mp[arr[i]]);
        }
        return b;
    }
};