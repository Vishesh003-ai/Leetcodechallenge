class Solution {
public:
    int longestPalindrome(string s) {
        int ans=0;
                unordered_map<char,int>mp;
                for(int i=0;i<s.length();i++){
                    char ch=s[i];
                    mp[ch]++;
                }
                int ones=1;
      for(auto it:mp){
        int count=it.second;
        if((count&1)==0){
            ans+=count;
        }
        else if(count==1&&ones==1){
            ans+=1;
            ones+=1;
        }
        else{
            ans+=count-1;
        }
       }
       if(ones == 1) {
            for(auto it : mp) {
                if(it.second & 1) {
                    ans++;//as already maine count-1 kr dia h to bs ek hor krna hai
                    break;
                }
            }

        }
return ans;
    }
};