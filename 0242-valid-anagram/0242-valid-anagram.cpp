class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>count;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            count[ch]++;
        }
        for(int i=0;i<t.length();i++){
            char ch=t[i];
            count[ch]--;
        }
        for(char ch='a';ch<='z';ch++){
            if(count[ch]!=0) return false;
        }
        return true;
    }
};