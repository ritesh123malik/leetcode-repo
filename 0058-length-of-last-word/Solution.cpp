class Solution {
public:
    int lengthOfLastWord(string s) {
        int i;
        int n = s.size();
        int index = -1;
        int count = 0;

        // Find last space
        for (i = 0; i < n; i++) {
            if (s[i] == ' ') {
                index = i;
            }
        }

        // Case 1: last character is not space
        if (s[n - 1] != ' ') {
            for (i = index + 1; i < n; i++) {
                count++;
            }
        }
        // Case 2: last character is space
        else {
            i = n - 1;

            // 🔧 FIX 1: skip trailing spaces
            while (i >= 0 && s[i] == ' ') {
                i--;
            }

            // 🔧 FIX 2: count last word
            while (i >= 0 && s[i] != ' ') {
                count++;
                i--;
            }
        }

        return count;
    }
};
