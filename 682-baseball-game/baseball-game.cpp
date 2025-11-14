class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;

        for(int i=0; i<operations.size(); ++i){
            char ch = operations[i][0];
            if(ch != 'C' && ch != '+' && ch != 'D'){
                s.push(stoi(operations[i]));
            }
            else{
                if(ch == 'C'){
                    s.pop();
                }
                else if(ch == '+'){
                    int a = s.top(); s.pop();
                    int b = s.top();
                    s.push(a);  s.push(a+b);
                }
                else if(ch == 'D'){
                    s.push(2*s.top());
                }
            }
        }
        int ans = 0;
        while(!s.empty()){
            cout<<s.top()<<" ";
            ans += s.top();
            s.pop();
        }
        return ans;
    }
};