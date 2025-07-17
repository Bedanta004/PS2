class Solution {
public:
    int largestInteger(int num) {
        vector<int> a,b,c,ans;
        while(num != 0){
            a.push_back(num%10);
            num /= 10;
        }
        reverse(a.begin(),a.end());

        for(int i=0; i<a.size(); i++){
            if(a[i]%2 == 0){
                b.push_back(a[i]);
            }
            else{
                c.push_back(a[i]);
            }
        }
        sort(b.begin(),b.end(), greater<int>());
        sort(c.begin(),c.end(), greater<int>());
       
        int m=0,n=0;

        for(int i=0; i<a.size(); i++){
            if(a[i]%2 == 0){
                ans.push_back(b[m]);
                m++;
            }
            else{
                ans.push_back(c[n]);
                n++;
            }
        }
        int sum =0;
        for(int num : ans){
            sum = sum*10 + num;
        }
        return sum;
    }
};