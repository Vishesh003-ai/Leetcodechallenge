class Solution {
public:

    int val(char c) {
        if (c == 'A') return 0;
        if (c == 'C') return 1;
        if (c == 'G') return 2;
        return 3; // T
    }

    vector<string> findRepeatedDnaSequences(string s) {

        vector<string> ans;

        if (s.length() < 10)
            return ans;

        unordered_map<int, int> mp;

        int code = 0;

        // First 10 characters
        for (int i = 0; i < 10; i++) {
            code = (code << 2) | val(s[i]);
        }

        mp[code]++;

        // Sliding window
        for (int i = 10; i < s.length(); i++) {

            // Remove the oldest 2 bits
            code &= (1 << 18) - 1;

            // Add new character
            code = (code << 2) | val(s[i]);

            mp[code]++;

            if (mp[code] == 2) {
                ans.push_back(s.substr(i - 9, 10));
            }
        }

        return ans;
    }
};