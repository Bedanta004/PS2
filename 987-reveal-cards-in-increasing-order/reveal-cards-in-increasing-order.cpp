class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());
        vector<int> ans(deck.size(), -1);
        queue<int> q;

        int k =0;
        while(k < ans.size()){
            q.push(k);
            k++;
        }
        int i = 0;

        while(q.size() > 0){
            int index = q.front();
            ans[index] = deck[i];
            i++;
            q.pop();
            int a = q.front();
            q.pop();
            q.push(a);
        }
        return ans;
    }
};