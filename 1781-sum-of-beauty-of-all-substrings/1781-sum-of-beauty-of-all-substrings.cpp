class Solution {
public:
    int beautySum(string s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            int freq[26] = {0};
            int maxFreq = 0;
            for (int j = i; j < s.length(); j++) {
                // Add current character
                freq[s[j] - 'a']++;
                // Update maximum frequency
                maxFreq = max(maxFreq, freq[s[j] - 'a']);

                // Find minimum non-zero frequency
                int minFreq = INT_MAX;
                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) {
                        minFreq = min(minFreq, freq[k]);
                    }
                }
                sum += maxFreq - minFreq;
            }
        }
        return sum;
    }
};