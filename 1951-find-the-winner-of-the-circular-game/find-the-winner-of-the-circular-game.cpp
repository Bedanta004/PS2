class Solution {
public:
    int findTheWinner(int n, int k) {
       //al players go to a queue
       queue<int> q; 

       for(int i=1; i<=n; i++) q.push(i);

       while(q.size() > 1){
        //simulate the game
        for(int i=1; i<k; i++){
            auto player = q.front();
            q.pop();
            //it isn't eliminated
            q.push(player);
        }
        //k'th player must be eliminated
        q.pop();
       }
       return q.front();
    }
};