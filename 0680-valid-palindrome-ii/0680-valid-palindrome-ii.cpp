class Solution {
public:
    bool isvalid(string &s,int l,int r){
      while(l<r){
        if(s[l]!=s[r])return false;
        else{
         l++;
         r--;
        }
      }
      return true;
    }
    bool validPalindrome(string s) {
        int st=0;
        int e=s.length()-1;
        while(st<=e){
            if(s[st]!=s[e]){
                return isvalid(s,st+1,e)||isvalid(s,st,e-1);
            }
            else{
                st++;
                e--;
            }
        }
return true;
    }
};