class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=needle.length()-1;
        while(j<haystack.length()){
      int k=0;
      while(k<needle.length()&&haystack[i+k]==needle[k]){
        k++;
      }
      if(k==needle.length()){
        return i;
      }
     i++;
     j++;

        }
        return -1;
    }
};