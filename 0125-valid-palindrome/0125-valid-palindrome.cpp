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
            if (!isvalidchar(s[i])) {
                i++;
            }
            else if (!isvalidchar(s[j])) {
                j--;
            }
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