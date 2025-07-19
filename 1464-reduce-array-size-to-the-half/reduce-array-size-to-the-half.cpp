class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> freq;

        for(int num : arr){
            freq[num]++;
        }
        vector<int> a;
        for(auto& it : freq){
            a.push_back(it.second);
        }
        sort(a.begin(),a.end());
        int m = a.size();
        int count =0;
        int t=0; 

        for(int i=a.size()-1; i>=0; i--){
            if(t < n/2){
                t = t+a[i];
                count++;
            }
            if(t >= n/2){
                break;
            }
        }
        return count;
    }
};