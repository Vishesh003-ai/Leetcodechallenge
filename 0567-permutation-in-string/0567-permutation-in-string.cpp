class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        if (n1 > n2) return false;
        int mp[256] = {0};
        for (char c : s1) {
            mp[c]++;
        }
        int i = 0;
        int j = n1 - 1;
        while (j < n2) {
            int temp[256] = {0};
            for (int k = i; k <= j; k++) {
                temp[s2[k]]++;
            }
            bool found = true;
            for (int k = 0; k < 256; k++) {
                if (mp[k] != temp[k]) {
                    found = false;
                    break;
                }
            }
            if (found) return true;
            i++;
            j++;
        }
        return false;
    }
};