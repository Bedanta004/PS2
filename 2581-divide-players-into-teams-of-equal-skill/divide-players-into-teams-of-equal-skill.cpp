class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int n = skill.size(),n1 =skill.size()-1,i=0;
        long long p=0;
        int m = skill[0] + skill[n1];

        while(i<n1){
            if(skill[i]+skill[n1] != m) return -1;
            if(skill[i]+skill[n1] == m){
                p += skill[i]*skill[n1];
            }
            i++;
            n1--;
        }
        return p;
    }
};