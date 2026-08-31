class Solution {
public:
    bool isvalidchar(char ch) {
        if (ch >= '0' && ch <= '9')
            return true;
        return false;
    }
    int myAtoi(string s) {
        int i = 0;
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        int sign = 1;
        if (i < s.length() && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (i < s.length() && s[i] == '+') {
            i++;
        }
        long long no = 0;
        while (i < s.length() && isvalidchar(s[i])) {
            no = no * 10 + (s[i] - '0');
            // Overflow handling
            if (sign == 1 && no > INT_MAX)
                return INT_MAX;
            if (sign == -1 && -no < INT_MIN)
                return INT_MIN;
            i++;
        }
        return sign * no;
    }
};