class Solution {
public:
    string removeDuplicates(string s) {
        string str="";
        for(int i=0;i<s.length();i++){

            if( str.empty()||str.back()!=s[i]){
                str.push_back(s[i]);
            }
            else{
                str.pop_back();
            }
        }
        return str;
    }
};