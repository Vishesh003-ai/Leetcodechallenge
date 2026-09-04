class Solution {
public:
    int firstUniqChar(string s) {
        int ans=-1;
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            mp[ch]++;
        }
//int l=0;
for(int i=0;i<s.length();i++){
    char ch=s[i];
    if(mp[ch]==1){
        ans=i;
        break;
    }
}
return ans;
    }
};