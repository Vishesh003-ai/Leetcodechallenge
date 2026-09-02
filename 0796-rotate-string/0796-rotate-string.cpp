class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }

        string new1 = s + s;

        return new1.find(goal) != -1;
    }
};