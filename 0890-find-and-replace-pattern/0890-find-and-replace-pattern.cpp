class Solution {
public:
  string normalisestring(string s,unordered_map<char,char>mp){
    char start='a';
   for(int i=0;i<s.length();i++){
   char ch=s[i];
   if(mp.find(ch)==mp.end()){
    mp[ch]=start;
    start++;
   }
   }
   for(int i=0;i<s.length();i++){
    s[i]=mp[s[i]];
   }
return s;
  }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        unordered_map<char,char>mp;
        string normalisepattern=normalisestring(pattern,mp);
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            string new1=words[i];
            string normalisenew=normalisestring(new1,mp);
            if(normalisenew==normalisepattern){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};