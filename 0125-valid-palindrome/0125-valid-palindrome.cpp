class Solution {
public:
    bool isvalidchar(char ch) {
        if (ch >= '0' && ch <= '9') return true;
        if (ch >= 'a' && ch <= 'z') return true;
        if (ch >= 'A' && ch <= 'Z') return true;
        return false;
    }

    char toLower(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }
        return ch;
    }

    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            // Move left pointer forward if current char is invalid
            if (!isvalidchar(s[i])) {
                i++;
            }
            // Move right pointer backward if current char is invalid
            else if (!isvalidchar(s[j])) {
                j--;
            }
            // Both are valid chars: compare them (converted to lowercase)
            else {
                if (toLower(s[i]) != toLower(s[j])) {
                    return false;
                }
                i++;
                j--;
            }
        }
        return true;
    }
};