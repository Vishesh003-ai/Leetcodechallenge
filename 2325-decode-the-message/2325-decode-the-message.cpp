class Solution {
public:
     void makemapping(unordered_map<char,char>&mapping,string &key){
        int start='a';
        for(int i=0;i<key.length();i++){
            char ch=key[i];
           if(ch!=' '&&mapping.find(ch)==mapping.end()){ 
            mapping[ch]=start;
            start++;}
        }
     }
     
     string usemapping(unordered_map<char,char>&mapping,string message){
        string s="";
        for(int i=0;i<message.length();i++){
            char ch=message[i];
            if(ch==' ') s.push_back(' ');
            else s.push_back(mapping[ch]);
        }
return s;
     }
    string decodeMessage(string key, string message) {
        unordered_map<char,char>mapping;
        makemapping(mapping,key);
        string ans=usemapping(mapping,message);
        return ans;
    }
};