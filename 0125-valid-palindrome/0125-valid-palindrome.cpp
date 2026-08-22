class Solution {
public:
   bool isvalidchar(char &ch){
    if(ch>='0'&&ch<='9'){
        return true;
    }
    if(ch>='a'&&ch<='z'){
        return true;
    }
    if(ch>='A'&&ch<='Z'){
        return true;
    }
    return false;
   }
string normalise(string &s){
   string newstr="";
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(isvalidchar(ch)){
            if(ch>='A'&& ch<='Z'){
                ch=ch-'A'+'a';
            }
            newstr.push_back(ch);
        }
    }
 return newstr;
}

    bool isPalindrome(string s) {
        string newstr=normalise(s);
        int i=0;
        int j=newstr.length()-1;
        while(i<j){
            if(newstr[i]!=newstr[j]) return false;
            i++;
            j--;
            
        }
        return true;
    }
};