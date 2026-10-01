class Solution {
public:
    bool isValid(string s) {
        string st;
        for (char c : s) {
            if (!st.empty() &&
                ((st.back() == '(' && c == ')') ||
                 (st.back() == '{' && c == '}') ||
                 (st.back() == '[' && c == ']'))) {
                st.pop_back();
            } 
            else {
                st += c;
            }
        }

        return st.empty();
    }
};