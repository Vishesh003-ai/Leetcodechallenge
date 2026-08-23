class Solution {
public:
   int palindrome(string &s,int i,int j){
    int count=0;
     while(i>=0&&j<s.length()&& s[i]==s[j]){
        count++;
        i--;
        j++;
     }
     return count;
   }
    int countSubstrings(string s) {
        int count=0;
        for(int center=0;center<s.length();center++){
         //odd
         int i=center;
         int j=center;
         int oddlen=palindrome(s,i,j);
         //even
          i=center;
         j=center+1;
         int evenlen=palindrome(s,i,j);
         count+=oddlen+evenlen;
        }
         
        return count;
    }
};