class Solution {
public:
    string generateTag(string caption) {
        string str = "#";

        // Skip leading spaces (MINIMAL addition)
        int i = 0;
        while (i < (int)caption.size() && caption[i] == ' ') i++;

        // If caption is empty or only spaces
        if (i == (int)caption.size())
            return str;

        // First character handling (as before but now from first non-space char)
        if(caption[i] >= 'A' && caption[i] <= 'Z'){
            str += caption[i] - 'A' + 'a';
        }
        else if(isalpha(caption[i])){
            str += caption[i];
        }
        i++;

        // Rest of code unchanged
        for(; i < (int)caption.size() && str.size() < 100; i++){
            if(caption[i - 1] == ' ' && isalpha(caption[i])) {
                if(caption[i] >= 'a' && caption[i] <= 'z'){
                    str += caption[i] - 'a' + 'A';
                }
                else if(caption[i] >= 'A' && caption[i] <= 'Z'){
                    str += caption[i];
                }
            }
            else if(caption[i] >= 'a' && caption[i] <= 'z'){
                str += caption[i];
            }
            else if(caption[i] >= 'A' && caption[i] <= 'Z'){
                str += caption[i] - 'A' + 'a';
            }
            // no else clause (same as original)
        }

        return str;
    }
};
