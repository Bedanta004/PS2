class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        for(char str : letters){
            if(str > target){
                return str;
            }
        }
        return letters[0];
    }
};