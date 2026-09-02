class Solution {
public:
    string largestOddNumber(string num) {
       int n=num.length()-1;
       for(int i=n;i>=0;i--){
       int no=num[i]-'0';
       if(no&1){
        return num.substr(0,i+1);
       }
       else{
        continue;
       }

       }
       return "";
    }
};