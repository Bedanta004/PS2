class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int left =0, maxL =0, zero =0;

        for(int right =0; right < answerKey.size(); right++){
            if(answerKey[right] == 'T') zero++;

            while(zero > k){
                if(answerKey[left] == 'T'){
                    zero--;
                }
                left++;
            }
            maxL = max(maxL, right-left+1);
        }
        
        int l = 0, maxR =0, one =0;

        for(int i=0; i<answerKey.size(); i++){
            if(answerKey[i] == 'F') one++;

            while(one > k){
                if(answerKey[l] == 'F'){
                    one--;
                }
                l++;
            }
            maxR = max(maxR, i-l+1);
        }
        return max(maxL, maxR);
    }
};