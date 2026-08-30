class Solution {
public:
    void normalise(string &st) {
        char start = 'a';
        char mapping[256] = {0}; // Fast array instead of unordered_map

        for (int i = 0; i < st.length(); i++) {
            char ch = st[i];
            if (mapping[ch] == 0) {
                mapping[ch] = start;
                start++;
            }
            st[i] = mapping[ch]; // Normalize in a single loop
        }
    }

    bool isIsomorphic(string s, string t) {
        normalise(s);
        normalise(t);
        return s == t;
    }
};