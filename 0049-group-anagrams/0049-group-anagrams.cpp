class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(string s:strs){

        string key(26,0);
        for(char ch:s){
            key[ch-'a']++;
        }
     mp[key].push_back(s);
        }
        vector<vector<string>>ans;
        ans.reserve(mp.size());
        for(auto &pair:mp){
            ans.push_back(move(pair.second));
        }
        return ans;
    }
};