class Solution {
public:
    int trap(vector<int>& height) {
        int rm=0, lr=0, ans=0, l=0, r=height.size()-1;

        while(l < r){
            if(height[l] < height[r]){
                lr = max(lr, height[l]);
                ans += lr - height[l++];
            }else{
                rm = max(rm, height[r]);
                ans += rm - height[r--];
            }
        }
        return ans;
    }
};