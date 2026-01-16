class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        vector<int> n1(4,0) , n2(4,0), n3(4,0);
        int i = 3;
        while(num1>0){
            n1[i--] = num1%10;
            num1 /= 10; 
        }
        i = 3;
        while(num2>0){
            n2[i--] = num2%10;
            num2 /= 10; 
        }
        i = 3;
        while(num3>0){
            n3[i--] = num3%10;
            num3 /= 10; 
        }
        
        int key = 0;
        for(int j = 0; j<4; j++){
            key = key * 10 + min(min(n1[j],n2[j]),n3[j]);
        }
        return key;
    }
};