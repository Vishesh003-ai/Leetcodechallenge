class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int left = 0;
        int ans = 0;
        for(int i = 0; i < s.length(); i++) {
            char ch = s[i];
            mp[ch]++;
            // Remove characters until duplicate is gone
            while(mp[ch] == 2) {
                mp[s[left]]--;
                left++;
            }
            // Current window length
            ans = max(ans, i - left + 1);
        }
        return ans;
    }
};