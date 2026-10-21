class Solution {
public:
    int numberOfSpecialChars(string word) {
        // Sets to store unique lowercase and uppercase characters
        unordered_set<char> lower;
        unordered_set<char> upper;
        
        // Populate the sets based on the string
        for (char ch : word) {
            if (islower(ch)) {
                lower.insert(ch);
            } else if (isupper(ch)) {
                upper.insert(ch);
            }
        }
        
        int specialCount = 0;
        
        // Check for every English letter from 'a' to 'z'
        for (char ch = 'a'; ch <= 'z'; ++ch) {
            // If both lowercase and uppercase exist in the word
            if (lower.count(ch) && upper.count(toupper(ch))) {
                specialCount++;
            }
        }
        
        return specialCount;
    }
};