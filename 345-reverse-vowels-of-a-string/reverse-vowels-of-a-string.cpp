class Solution {
public:
char toLower(char c) { 
        if (c >= 'A' && c <= 'Z') return c + ('a' - 'A'); 
        return c;
    }
   bool isVowel(char c) {
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    string reverseVowels(string s) {
        int st = 0, e = s.size() - 1;

        while (st < e) {
            while (st < e && !isVowel(s[st])) st++;  // Move st to a vowel
            while (st < e && !isVowel(s[e])) e--;  // Move e to a vowel
            
            swap(s[st], s[e]);  // Swap vowels
            st++;
            e--;
        }

        return s;
    }
};