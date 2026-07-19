class Solution {
public:
    int lengthOfLastWord(string s) {
        int count =0;
        int i=0;
        reverse(s.begin(), s.end());
           while (i < s.size() && s[i] == ' ') {
            i++;
        }
         while (i < s.size() && s[i] != ' ') {
            count++;
            i++;
        }

        return count;
    }
};