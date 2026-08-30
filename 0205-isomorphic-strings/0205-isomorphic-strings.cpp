class Solution {
public:
   string normalise(unordered_map<char,int>&mapping,string &st){
char start='a';
for(int i=0;i<st.length();i++){
  char ch=st[i];
  if(mapping.find(ch)==mapping.end()){
    mapping[ch]=start;
    //ch=start;
    start++;
  }
}
for (int i = 0; i < st.length(); i++) {
            st[i] = mapping[st[i]];
        }
  return st;
   }
    bool isIsomorphic( string& s,  string& t) {
        // Implement logic to check if `s` and `t` are isomorphic
       unordered_map<char,int>mapping1;
       unordered_map<char,int>mapping2;
       string s1=normalise(mapping1,s);
        string s2=normalise(mapping2,t);

        return s1==s2;
        
    }
};