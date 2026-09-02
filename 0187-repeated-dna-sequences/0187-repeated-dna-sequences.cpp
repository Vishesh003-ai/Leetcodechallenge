class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>mp;
        vector<string>ans;
        for(int i=0;i+10<=s.length();i++){
  string temp=s.substr(i,10);//takes 10 char including i
  mp[temp]++;
  if (mp[temp] == 2) {
                ans.push_back(temp);
            }

        }
        return ans;
    }
};