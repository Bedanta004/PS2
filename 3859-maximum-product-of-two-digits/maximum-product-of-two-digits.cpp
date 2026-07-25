class Solution {
public:
    int maxProduct(int n) {
        vector<int> star;
        
        while(n != 0){
            star.push_back(n%10);
            n = n/10;
        }
        sort(star.begin(),star.end());
        int m = star.size();
        return star[m-1]*star[m-2];
    }
};