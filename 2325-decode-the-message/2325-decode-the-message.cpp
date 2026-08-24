class Solution {
public:
    string decodeMessage(string key, string message) {
        // Direct lookup table for all 256 ASCII characters
        char mapping[256] = {0};
        char start = 'a';

        // Step 1: Create mapping
        for (char ch : key) {
            if (ch != ' ' && mapping[ch] == 0) {
                mapping[ch] = start;
                start++;
            }
        }

        // Step 2: Decode message in-place or into a new string
        for (int i = 0; i < message.length(); i++) {
            if (message[i] != ' ') {
                message[i] = mapping[message[i]];
            }
        }

        return message;
    }
};