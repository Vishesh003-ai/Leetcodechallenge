class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for (int l = 0; l < n; l += 2 * k) {
            int r = min(l + k - 1, n - 1);
            reverse(s.begin() + l, s.begin() + r + 1);
        }
        return s;
    }
};