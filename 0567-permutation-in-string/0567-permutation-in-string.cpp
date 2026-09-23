class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        int mp[26] = {0};
        for (char c : s1)
            mp[c - 'a']++;
        int i = 0;
        for (int j = 0; j < s2.size(); j++) {
            mp[s2[j] - 'a']--;
            if (j - i + 1 > s1.size()) {
                mp[s2[i] - 'a']++;
                i++;
            }
            if (j - i + 1 == s1.size()) {
                bool ok = true;
                for (int k = 0; k < 26; k++) {
                    if (mp[k] != 0) {
                        ok = false;
                        break;
                    }
                }
                if (ok) return true;
            }
        }
        return false;
    }
};