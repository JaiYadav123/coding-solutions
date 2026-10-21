# Count the Number of Special Characters I

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a string `word`. A letter is called  **special**  if it appears  **both**  in lowercase and uppercase in `word`.

Return the number of  **special**  letters in `word`.

 

 **Example 1:** 

 **Input:**  word = "aaAbcBC"

 **Output:**  3

 **Explanation:** 

The special characters in `word` are `'a'`, `'b'`, and `'c'`.

 **Example 2:** 

 **Input:**  word = "abc"

 **Output:**  0

 **Explanation:** 

No character in `word` appears in uppercase.

 **Example 3:** 

 **Input:**  word = "abBCab"

 **Output:**  1

 **Explanation:** 

The only special character in `word` is `'b'`.

 

 **Constraints:** 

- 1 <= word.length <= 50
- word consists of only lowercase and uppercase English letters.

## Solution

**Language:** C++  
**Runtime:** 6 ms (beats 4.27%)  
**Memory:** 9.8 MB (beats 9.59%)  
**Submitted:** 2026-10-21T16:55:15.222Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/count-the-number-of-special-characters-i/)