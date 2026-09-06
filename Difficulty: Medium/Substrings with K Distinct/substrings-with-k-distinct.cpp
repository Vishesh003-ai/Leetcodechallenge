class Solution {
  public:
  int atleast(string &s,int k){
      int n=s.size();
      int freq[26]={0};
      int ans=0;
      int j=0;
      int distinct=0;
      for(int i=0;i<s.length();i++){
          if(freq[s[i]-'a']==0){
              distinct++;
          }
          freq[s[i]-'a']++;
          while(distinct>=k){
              ans+=n-i;
              
              freq[s[j]-'a']--;
              if(freq[s[j]-'a']==0){
                  distinct--;
              }
              j++;
          }
          
      }
      return ans;
  }
    int countSubstr(string& s, int k) {
        // code here
        return atleast(s,k)-atleast(s,k+1);
    }
};