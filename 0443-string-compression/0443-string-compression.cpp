class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0;
        for(int i = 0; i < n; ) {
            char ch = chars[i];
            int count = 0;
            // Count consecutive same characters
            while(i < n && chars[i] == ch) {
                count++;
                i++;
            }
            // Put character
            chars[index++] = ch;
            // Put frequency if > 1
            if(count > 1) {
                string s = to_string(count);
                for(char c : s) {
                    chars[index++] = c;
                }
            }
        }
        return index;
    }
};