class Solution {
public:
bool checkP(int num){
    if(num == 1) return false;
    if(num == 2) return true;

    for(int i=2; i<num; ++i){
        if(num%i == 0) return false;
    }
    return true;
}
    int sumOfPrimesInRange(int n) {
        string st = to_string(n);
        reverse(begin(st), end(st));
        int n1 = stoi(st);

        int mini = min(n, n1), maxi = max(n, n1);
        int sum = 0;

        for(int i=mini; i<=maxi; ++i)
        if(checkP(i)) sum += i;

        return sum;
    }
};