class Solution {
public:
    vector<int> dp;
    void lengthofstring(string &s, int k, int l, int r) {
        while (l >= 0 && r < s.length() && s[l] == s[r]) {
            int length = r - l + 1;
            if (length >= k) {
                dp[r + 1] = max(dp[r + 1], dp[l] + 1);
            }
            l--;
            r++;
        }
    }
    int maxPalindromes(string s, int k) {
        int n = s.length();
        dp.assign(n + 1, 0);
        for (int i = 0; i < n; i++) {
            if (i > 0)
                dp[i + 1] = max(dp[i + 1], dp[i]);
            // Odd length palindrome
            lengthofstring(s, k, i, i);
            // Even length palindrome
            lengthofstring(s, k, i, i + 1);
        }
        return dp[n];
    }
};