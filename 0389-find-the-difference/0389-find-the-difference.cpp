class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
        if(s.empty()) return t[0];
        if(t.empty()) return s[0];
for(char c : s)
    ans ^= c;
for(char c : t)
    ans ^= c;
     return ans;
    }
   
};